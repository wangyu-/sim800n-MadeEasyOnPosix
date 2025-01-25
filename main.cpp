#include <stdio.h>
#include <SDL.h>
#include <verilated.h>
#include <stdio.h>
#include "lcdpainter.h"
#include "Vspdc1016.h"
#include "Vspdc1016___024root.h"

// screen dimensions
const int H_RES = 160;
const int V_RES = 80;

double sc_time_stamp(){return 0;}

typedef union Pixel {
    struct {
        uint8_t a;  // transparency
        uint8_t b;  // blue
        uint8_t g;  // green
        uint8_t r;  // red
    };
    uint32_t rgba;
} Pixel;

Pixel screenbuffer[H_RES*V_RES];

Vspdc1016* top;

unsigned char Nibble2Hex(unsigned char num) {
    if (num < 10) {
        return num + '0';
    } else {
        return num + '7';
    }
}

void dumpvec(VlUnpacked<CData, 16384>& vec, size_t addr, size_t len)
{
    char line[80];
    int fullline = len / 16;
    int rowcount = fullline;
    int last = len % 16;
    if (last) {
        rowcount++;
    }
    size_t curr = addr;
    line[4] = ':';
    line[5] = ' ';
    line[30] = ' ';
    line[55] = '|';
    line[56] = ' ';
    line[73] = 0;
    for (int y = 0; y < rowcount; y++) {
        line[0] = Nibble2Hex((curr >> 12) & 0xF);
        line[1] = Nibble2Hex((curr >> 8) & 0xF);
        line[2] = Nibble2Hex((curr >> 4) & 0xF);
        line[3] = Nibble2Hex(curr & 0xF);
        if (!last || y != rowcount - 1) {
            // do full
            unsigned pos = 6;
            for (int x = 0; x < 16; x++, curr++) {
                unsigned char c = vec[curr];
                if (c == 0) {
                    *(unsigned short*)&line[pos] = 0x3030;
                    pos += 2;
                } else if (c == 0xFF) {
                    *(unsigned short*)&line[pos] = 0x4646;
                    pos += 2;
                } else {
                    line[pos++] = Nibble2Hex(c >> 4);
                    line[pos++] = Nibble2Hex(c & 0xF);
                }
                line[pos++] = ' ';
                if (x == 7) {
                    pos++;
                }
                line[57 + x] = (c >= ' ' && c <= '~') ? c : '.';
            }
            // TODO: puts
            puts(line);
        } else {
            unsigned pos = 6;
            for (int x = 0; x < last; x++, curr++) {
                unsigned char c = vec[curr];
                line[pos++] = Nibble2Hex(c >> 4);
                line[pos++] = Nibble2Hex(c & 0xF);
                line[pos++] = ' ';
                if (x == 7) {
                    pos++;
                }
                line[57 + x] = (c >= ' ' && c <= '~') ? c : '.';
            }
            while (pos < 55) {
                line[pos++] = ' ';
            }
            line[57 + last] = 0;
            puts(line);
        }

    }
}

extern uint16_t LogDisassembly(uint16_t offset, char* text);
extern void PrependLog(const char* text); // before assembly
extern void PrependLogEx(const char* fmt, ...); // before assembly
extern void LogEx(const char* fmt, ...);

int main(int argc, char* argv[]) {
    Verilated::commandArgs(argc, argv);

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL init failed.\n");
        return 1;
    }

    SDL_Window*   sdl_window = NULL;
    SDL_Renderer* sdl_renderer = NULL;
    SDL_Texture*  sdl_texture = NULL;
#ifdef FULLLCD
    MyLCDView*    lcdview = new MyLCDView(L"lcdstripe_slice_w938.json");
    sdl_window = SDL_CreateWindow("sim800n", SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, lcdview->getLCDWidth(), lcdview->getLCDHeight(), SDL_WINDOW_SHOWN);
#else
    sdl_window = SDL_CreateWindow("sim800n", SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, H_RES * 3, V_RES * 3, SDL_WINDOW_SHOWN);
#endif
    if (!sdl_window) {
        printf("Window creation failed: %s\n", SDL_GetError());
        return 1;
    }

    sdl_renderer = SDL_CreateRenderer(sdl_window, -1, SDL_RENDERER_ACCELERATED);
    if (!sdl_renderer) {
        printf("Renderer creation failed: %s\n", SDL_GetError());
        return 1;
    }
#ifdef FULLLCD
    lcdview->loadStripeTexture(L"lcdstripe_w938.png", sdl_renderer);
#else
    sdl_texture = SDL_CreateTexture(sdl_renderer, SDL_PIXELFORMAT_RGBA8888,
        SDL_TEXTUREACCESS_TARGET, H_RES, V_RES);
    if (!sdl_texture) {
        printf("Texture creation failed: %s\n", SDL_GetError());
        return 1;
    }
#endif

    // initialize Verilog module
    top = new Vspdc1016;

    // reset
    top->reset = 1;
    top->clk4x = 0;
    top->eval();
    for (int i = 0; i < 12; i++) {
        top->clk4x = 1;
        top->eval();
        top->clk4x = 0;
        top->eval();
    }
    top->reset = 0;
    top->eval();
    bool oldcp = top->lcd_CP;
    bool oldlp = top->lcd_LP;
    bool oldfp = top->lcd_FP;
    bool oldclk = top->rootp->spdc1016__DOT__clk;
    uint8_t olddi = 0;
    uint16_t oldpc = top->rootp->spdc1016__DOT__cpu__DOT__PC;
    uint8_t oldstate = top->rootp->spdc1016__DOT__cpu__DOT__state;
    uint8_t oldnmi = top->rootp->spdc1016__DOT__nmi;
    bool oldirq = top->rootp->spdc1016__DOT__hub__DOT__irqcnter != 0;
    uint8_t x = 0, y = 0;
    unsigned long long totalcycle = 0, oldcycle = 0;
    while (1) {
        // check for quit event
        SDL_Event e;
        if (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                break;
            }
        }

        // cycle the clock
        top->clk4x = 1;
        top->eval();
        top->clk4x = 0;
        top->eval();

        if (!oldclk && top->rootp->spdc1016__DOT__clk) {
            if (oldstate == 12) {
//                 if (oldcycle)
//                     LogEx("\t%d\n", totalcycle - oldcycle);
//                 oldcycle = totalcycle;
//                 LogDisassembly(oldpc - 1, 0);
                //if (top->spdc1016__DOT__nmi && !oldnmi) {
                //    PrependLog("ggv wanna NMI.");
                //}
                //if (top->spdc1016__DOT__hub__DOT__irqcnter && !oldirq) {
                //    PrependLogEx("ggv wanna %02X IRQ.\n", top->spdc1016__DOT__hub__DOT__io_int_status);
                //}
                oldirq = top->rootp->spdc1016__DOT__hub__DOT__irqcnter != 0;
            }
            oldpc = top->rootp->spdc1016__DOT__cpu__DOT__PC;
            oldstate = top->rootp->spdc1016__DOT__cpu__DOT__state;
            oldnmi = top->rootp->spdc1016__DOT__nmi;
            totalcycle++;
        }

        // update pixel if CP arrived
        if (oldcp && !top->lcd_CP) {
#ifdef FULLLCD
            lcdview->setPixel(H_RES - 1 - x, V_RES - 1 - y, top->lcd_DO);
#else
            Pixel* p = &screenbuffer[(V_RES - 1 - y)*H_RES + (H_RES - 1 - x)];
            p->rgba = top->lcd_DO ? 0x000000FF : 0xFFFFFFFF;
#endif
            if (++x == H_RES) {
                x = 0;
            }
        }

        // update texture once per line at line pulse
        if (oldlp && !top->lcd_LP) {
            x = 0;
            if (++y == V_RES) {
                y = 0;
            }
        }

        if (oldfp && !top->lcd_FP) {
#ifdef FULLLCD
            lcdview->paint(sdl_renderer, true);
#else
            SDL_UpdateTexture(sdl_texture, NULL, screenbuffer, H_RES * sizeof(Pixel));
            SDL_RenderClear(sdl_renderer);
            SDL_RenderCopy(sdl_renderer, sdl_texture, NULL, NULL);
#endif
            SDL_RenderPresent(sdl_renderer);
            y = 1;
            x = 0;
        }
        oldcp = top->lcd_CP;
        oldlp = top->lcd_LP;
        oldfp = top->lcd_FP;
        oldclk = top->rootp->spdc1016__DOT__clk;
        olddi = top->rootp->spdc1016__DOT__cpu_di;
    }

    top->final();  // simulation done
    delete top;

#ifdef FULLLCD
    delete lcdview;
#else
    SDL_DestroyTexture(sdl_texture);
#endif
    SDL_DestroyRenderer(sdl_renderer);
    SDL_DestroyWindow(sdl_window);
    SDL_Quit();
    return 0;
}
