#include "mapper.h"
#include "Vspdc1016.h"

extern Vspdc1016* top;

#define  INVALID1        1
#define  INVALID2        2
#define  INVALID3        3
#define  ADDR_IMM        4
#define  ADDR_ABS        5
#define  ADDR_ZPG        6
#define  ADDR_ABSX       7
#define  ADDR_ABSY       8
#define  ADDR_ZPGX       9
#define  ADDR_ZPGY       10
#define  ADDR_REL        11
#define  ADDR_BBREL      12
#define  ADDR_INDX       13
#define  ADDR_ABSIINDX   14
#define  ADDR_INDY       15
#define  ADDR_IZPG       16
#define  ADDR_IABS       17


typedef struct _addrrec {
    char format[12];
    int  bytes;
} addrrec, *addrptr;


typedef struct _instrec {
    char mnemonic[5];
    int  addrmode;
} instrec, *instptr;


addrrec addressmode[19] = { {""         ,1},        // (implied)
{""         ,1},        // INVALID1
{""         ,2},        // INVALID2
{""         ,3},        // INVALID3
{"#$%02X"   ,2},        // ADDR_IMM
{"%s"       ,3},        // ADDR_ABS
{"%s"       ,2},        // ADDR_ZPG
{"%s,X"     ,3},        // ADDR_ABSX
{"%s,Y"     ,3},        // ADDR_ABSY
{"%s,X"     ,2},        // ADDR_ZPGX
{"%s,Y"     ,2},        // ADDR_ZPGY
{"%s"       ,2},        // ADDR_REL
{"%s %s"    ,3},        // ADDR_BBREL
{"(%s,X)"   ,2},        // ADDR_INDX
{"(%s,X)"   ,3},        // ADDR_ABSIINDX
{"(%s),Y"   ,2},        // ADDR_INDY
{"(%s)"     ,2},        // ADDR_IZPG
{"(%s)"     ,3},        // ADDR_IABS
{"IO PAGE"  ,1} };      // ADDR_IO PAGE

instrec instruction[257] = { {"BRK",ADDR_ABS},              // 00h
{"ORA",ADDR_INDX},      // 01h
{"NOP",INVALID2},       // 02h
{"NOP",INVALID1},       // 03h
{"TSB",ADDR_ZPG},       // 04h
{"ORA",ADDR_ZPG},       // 05h
{"ASL",ADDR_ZPG},       // 06h
{"RMB0",ADDR_ZPG},      // 07h
{"PHP",0},              // 08h
{"ORA",ADDR_IMM},       // 09h
{"ASL",0},              // 0Ah
{"NOP",INVALID1},       // 0Bh
{"TSB",ADDR_ABS},       // 0Ch
{"ORA",ADDR_ABS},       // 0Dh
{"ASL",ADDR_ABS},       // 0Eh
{"BBR0",ADDR_BBREL},    // 0Fh
{"BPL",ADDR_REL},       // 10h
{"ORA",ADDR_INDY},      // 11h
{"ORA",ADDR_IZPG},      // 12h
{"NOP",INVALID1},       // 13h
{"TRB",ADDR_ZPG},       // 14h
{"ORA",ADDR_ZPGX},      // 15h
{"ASL",ADDR_ZPGX},      // 16h
{"RMB1",ADDR_ZPG},      // 17h
{"CLC",0},              // 18h
{"ORA",ADDR_ABSY},      // 19h
{"INA",0},              // 1Ah
{"NOP",INVALID1},       // 1Bh
{"TRB",ADDR_ABS},       // 1Ch
{"ORA",ADDR_ABSX},      // 1Dh
{"ASL",ADDR_ABSX},      // 1Eh
{"BBR1",ADDR_BBREL},    // 1Fh
{"JSR",ADDR_ABS},       // 20h
{"AND",ADDR_INDX},      // 21h
{"NOP",INVALID2},       // 22h
{"NOP",INVALID1},       // 23h
{"BIT",ADDR_ZPG},       // 24h
{"AND",ADDR_ZPG},       // 25h
{"ROL",ADDR_ZPG},       // 26h
{"RMB2",ADDR_ZPG},      // 27h
{"PLP",0},              // 28h
{"AND",ADDR_IMM},       // 29h
{"ROL",0},              // 2Ah
{"NOP",INVALID1},       // 2Bh
{"BIT",ADDR_ABS},       // 2Ch
{"AND",ADDR_ABS},       // 2Dh
{"ROL",ADDR_ABS},       // 2Eh
{"BBR2",ADDR_BBREL},    // 2Fh
{"BMI",ADDR_REL},       // 30h
{"AND",ADDR_INDY},      // 31h
{"AND",ADDR_IZPG},      // 32h
{"NOP",INVALID1},       // 33h
{"BIT",ADDR_ZPGX},      // 34h
{"AND",ADDR_ZPGX},      // 35h
{"ROL",ADDR_ZPGX},      // 36h
{"RMB3",ADDR_ZPG},      // 37h
{"SEC",0},              // 38h
{"AND",ADDR_ABSY},      // 39h
{"DEA",0},              // 3Ah
{"NOP",INVALID1},       // 3Bh
{"BIT",ADDR_ABSX},      // 3Ch
{"AND",ADDR_ABSX},      // 3Dh
{"ROL",ADDR_ABSX},      // 3Eh
{"BBR3",ADDR_BBREL},    // 3Fh
{"RTI",0},              // 40h
{"EOR",ADDR_INDX},      // 41h
{"NOP",INVALID2},       // 42h
{"NOP",INVALID1},       // 43h
{"NOP",INVALID2},       // 44h
{"EOR",ADDR_ZPG},       // 45h
{"LSR",ADDR_ZPG},       // 46h
{"RMB4",ADDR_ZPG},      // 47h
{"PHA",0},              // 48h
{"EOR",ADDR_IMM},       // 49h
{"LSR",0},              // 4Ah
{"NOP",INVALID1},       // 4Bh
{"JMP",ADDR_ABS},       // 4Ch
{"EOR",ADDR_ABS},       // 4Dh
{"LSR",ADDR_ABS},       // 4Eh
{"BBR4",ADDR_BBREL},    // 4Fh
{"BVC",ADDR_REL},       // 50h
{"EOR",ADDR_INDY},      // 51h
{"EOR",ADDR_IZPG},      // 52h
{"NOP",INVALID1},       // 53h
{"NOP",INVALID2},       // 54h
{"EOR",ADDR_ZPGX},      // 55h
{"LSR",ADDR_ZPGX},      // 56h
{"RMB5",ADDR_ZPG},      // 57h
{"CLI",0},              // 58h
{"EOR",ADDR_ABSY},      // 59h
{"PHY",0},              // 5Ah
{"NOP",INVALID1},       // 5Bh
{"NOP",INVALID3},       // 5Ch
{"EOR",ADDR_ABSX},      // 5Dh
{"LSR",ADDR_ABSX},      // 5Eh
{"BBR5",ADDR_BBREL},    // 5Fh
{"RTS",0},              // 60h
{"ADC",ADDR_INDX},      // 61h
{"NOP",INVALID2},       // 62h
{"NOP",INVALID1},       // 63h
{"STZ",ADDR_ZPG},       // 64h
{"ADC",ADDR_ZPG},       // 65h
{"ROR",ADDR_ZPG},       // 66h
{"RMB6",ADDR_ZPG},      // 67h
{"PLA",0},              // 68h
{"ADC",ADDR_IMM},       // 69h
{"ROR",0},              // 6Ah
{"NOP",INVALID1},       // 6Bh
{"JMP",ADDR_IABS},      // 6Ch
{"ADC",ADDR_ABS},       // 6Dh
{"ROR",ADDR_ABS},       // 6Eh
{"BBR6",ADDR_BBREL},    // 6Fh
{"BVS",ADDR_REL},       // 70h
{"ADC",ADDR_INDY},      // 71h
{"ADC",ADDR_IZPG},      // 72h
{"NOP",INVALID1},       // 73h
{"STZ",ADDR_ZPGX},      // 74h
{"ADC",ADDR_ZPGX},      // 75h
{"ROR",ADDR_ZPGX},      // 76h
{"RMB7",ADDR_ZPG},      // 77h
{"SEI",0},              // 78h
{"ADC",ADDR_ABSY},      // 79h
{"PLY",0},              // 7Ah
{"NOP",INVALID1},       // 7Bh
{"JMP",ADDR_ABSIINDX},  // 7Ch
{"ADC",ADDR_ABSX},      // 7Dh
{"ROR",ADDR_ABSX},      // 7Eh
{"BBR7",ADDR_BBREL},    // 7Fh
{"BRA",ADDR_REL},       // 80h
{"STA",ADDR_INDX},      // 81h
{"NOP",INVALID2},       // 82h
{"NOP",INVALID1},       // 83h
{"STY",ADDR_ZPG},       // 84h
{"STA",ADDR_ZPG},       // 85h
{"STX",ADDR_ZPG},       // 86h
{"SMB0",ADDR_ZPG},      // 87h
{"DEY",0},              // 88h
{"BIT",ADDR_IMM},       // 89h
{"TXA",0},              // 8Ah
{"NOP",INVALID1},       // 8Bh
{"STY",ADDR_ABS},       // 8Ch
{"STA",ADDR_ABS},       // 8Dh
{"STX",ADDR_ABS},       // 8Eh
{"BBS0",ADDR_BBREL},    // 8Fh
{"BCC",ADDR_REL},       // 90h
{"STA",ADDR_INDY},      // 91h
{"STA",ADDR_IZPG},      // 92h
{"NOP",INVALID1},       // 93h
{"STY",ADDR_ZPGX},      // 94h
{"STA",ADDR_ZPGX},      // 95h
{"STX",ADDR_ZPGY},      // 96h
{"SMB1",ADDR_ZPG},      // 97h
{"TYA",0},              // 98h
{"STA",ADDR_ABSY},      // 99h
{"TXS",0},              // 9Ah
{"NOP",INVALID1},       // 9Bh
{"STZ",ADDR_ABS},       // 9Ch
{"STA",ADDR_ABSX},      // 9Dh
{"STZ",ADDR_ABSX},      // 9Eh
{"BBS1",ADDR_BBREL},    // 9Fh
{"LDY",ADDR_IMM},       // A0h
{"LDA",ADDR_INDX},      // A1h
{"LDX",ADDR_IMM},       // A2h
{"NOP",INVALID1},       // A3h
{"LDY",ADDR_ZPG},       // A4h
{"LDA",ADDR_ZPG},       // A5h
{"LDX",ADDR_ZPG},       // A6h
{"SMB2",ADDR_ZPG},      // A7h
{"TAY",0},              // A8h
{"LDA",ADDR_IMM},       // A9h
{"TAX",0},              // AAh
{"NOP",INVALID1},       // ABh
{"LDY",ADDR_ABS},       // ACh
{"LDA",ADDR_ABS},       // ADh
{"LDX",ADDR_ABS},       // AEh
{"BBS2",ADDR_BBREL},    // AFh
{"BCS",ADDR_REL},       // B0h
{"LDA",ADDR_INDY},      // B1h
{"LDA",ADDR_IZPG},      // B2h
{"NOP",INVALID1},       // B3h
{"LDY",ADDR_ZPGX},      // B4h
{"LDA",ADDR_ZPGX},      // B5h
{"LDX",ADDR_ZPGY},      // B6h
{"SMB3",ADDR_ZPG},      // B7h
{"CLV",0},              // B8h
{"LDA",ADDR_ABSY},      // B9h
{"TSX",0},              // BAh
{"NOP",INVALID1},       // BBh
{"LDY",ADDR_ABSX},      // BCh
{"LDA",ADDR_ABSX},      // BDh
{"LDX",ADDR_ABSY},      // BEh
{"BBS3",ADDR_BBREL},    // BFh
{"CPY",ADDR_IMM},       // C0h
{"CMP",ADDR_INDX},      // C1h
{"NOP",INVALID2},       // C2h
{"NOP",INVALID1},       // C3h
{"CPY",ADDR_ZPG},       // C4h
{"CMP",ADDR_ZPG},       // C5h
{"DEC",ADDR_ZPG},       // C6h
{"SMB4",ADDR_ZPG},      // C7h
{"INY",0},              // C8h
{"CMP",ADDR_IMM},       // C9h
{"DEX",0},              // CAh
{"WAI",INVALID1},       // CBh
{"CPY",ADDR_ABS},       // CCh
{"CMP",ADDR_ABS},       // CDh
{"DEC",ADDR_ABS},       // CEh
{"BBS4",ADDR_BBREL},    // CFh
{"BNE",ADDR_REL},       // D0h
{"CMP",ADDR_INDY},      // D1h
{"CMP",ADDR_IZPG},      // D2h
{"NOP",INVALID1},       // D3h
{"NOP",INVALID2},       // D4h
{"CMP",ADDR_ZPGX},      // D5h
{"DEC",ADDR_ZPGX},      // D6h
{"SMB5",ADDR_ZPG},      // D7h
{"CLD",0},              // D8h
{"CMP",ADDR_ABSY},      // D9h
{"PHX",0},              // DAh
{"STP",INVALID1},       // DBh
{"NOP",INVALID3},       // DCh
{"CMP",ADDR_ABSX},      // DDh
{"DEC",ADDR_ABSX},      // DEh
{"BBS5",ADDR_BBREL},    // DFh
{"CPX",ADDR_IMM},       // E0h
{"SBC",ADDR_INDX},      // E1h
{"NOP",INVALID2},       // E2h
{"NOP",INVALID1},       // E3h
{"CPX",ADDR_ZPG},       // E4h
{"SBC",ADDR_ZPG},       // E5h
{"INC",ADDR_ZPG},       // E6h
{"SMB6",ADDR_ZPG},      // E7h
{"INX",0},              // E8h
{"SBC",ADDR_IMM},       // E9h
{"NOP",0},              // EAh
{"NOP",INVALID1},       // EBh
{"CPX",ADDR_ABS},       // ECh
{"SBC",ADDR_ABS},       // EDh
{"INC",ADDR_ABS},       // EEh
{"BBS6",ADDR_BBREL},    // EFh
{"BEQ",ADDR_REL},       // F0h
{"SBC",ADDR_INDY},      // F1h
{"SBC",ADDR_IZPG},      // F2h
{"NOP",INVALID1},       // F3h
{"NOP",INVALID2},       // F4h
{"SBC",ADDR_ZPGX},      // F5h
{"INC",ADDR_ZPGX},      // F6h
{"SMB7",ADDR_ZPG},      // F7h
{"SED",0},              // F8h
{"SBC",ADDR_ABSY},      // F9h
{"PLX",0},              // FAh
{"NOP",INVALID1},       // FBh
{"NOP",INVALID3},       // FCh
{"SBC",ADDR_ABSX},      // FDh
{"INC",ADDR_ABSX},      // FEh
{"BBS7",ADDR_BBREL},    // FFh
{"   ",18} };           // 100h


FILE* logfile = NULL;

const char* GetSymbol(uint16_t address, int bytes);
const char* byte_to_binary(unsigned char c, char* b);
const char* parse_ps(unsigned char c, char* b);
void parse_address_page(unsigned short address, char* page);


unsigned logpos = 0;

char logbuff[102400 * 50]; // 5M buffer. no need initialize
char extralog[1024];
int extrapos = 0;
bool loginited = false;

void InitLogFile()
{
    if (logfile == NULL) {
        wchar_t* filepath = new wchar_t[1024];
        _wgetcwd(filepath, 1024);
        wcscat(filepath, L"\\Sim800n.txt");
        //logfile = _tfopen(filepath, TEXT("w"));
        errno_t error = _wfopen_s(&logfile, filepath, L"wt");
        delete[] filepath;
        if (logfile == NULL) {
            return; // Fake!
        }
        fprintf(logfile, "================================\n");
        loginited = true;
    }
}

void CloseLogFile()
{
    if (logfile) {
        fclose(logfile);
        logfile = NULL;
    }
}

// save in main.cpp
extern uint8_t regA, regX, regY, regS, regP;

uint16_t LogDisassembly(uint16_t offset, char* text)
{
    if (loginited == false) {
        InitLogFile();
    }
    if (logfile == NULL) {
        return 0;
    }
    char addresstext[40] = "";
    char bytestext[10] = "";
    uint16_t  inst = GetByte(offset);

    if (offset < iorange) {
        // Register address can't be executed
        inst = 0x100;
    }

    int   addrmode = instruction[inst].addrmode;
    uint16_t  bytes = addressmode[addrmode].bytes;


    // Build a string containing the target address or symbol
    if (addressmode[addrmode].format[0]) {
        uint16_t address = GetWord((offset + 1) & 0xffff);

        if (bytes == 2) {
            address &= 0xFF;
        }

        if (addrmode == ADDR_IMM) {
            uint16_t address = GetWord((offset + 1) & 0xffff) & 0xFF;
            sprintf(addresstext,
                addressmode[addrmode].format,
                (unsigned)address);
        }
        if (addrmode == ADDR_REL) {
            address = (offset + 2 + (int)(signed char)address) & 0xffff;
            sprintf(addresstext,
                addressmode[addrmode].format,
                GetSymbol(address, bytes));
        }
        if (addrmode == ADDR_BBREL) {
            address &= 0xFF;
            uint16_t zpaddr = address;
            address = GetWord((offset + 2) & 0xffff); //*(LPWORD)(mem+((offset+2) & 0xffff));
            address &= 0xFF;
            address = (offset + 3 + (int)(signed char)address) & 0xffff;

            char zptxt[14];
            sprintf(zptxt, "%s", GetSymbol(zpaddr, 2));
            sprintf(addresstext,
                addressmode[addrmode].format,
                zptxt,
                GetSymbol(address, 3));
        }

        if (addresstext[0] == 0) {//else
            sprintf(addresstext,
                addressmode[addrmode].format,
                GetSymbol(address, bytes));
        }
    }

    // Build a string containing the actual bytes that make up this
    // instruction
    {
        int loop = 0;
        while (loop < bytes)
            sprintf(bytestext + strlen(bytestext),
                "%02X",
                GetByte(offset + (loop++)));
        while (strlen(bytestext) < 6)
            strcat(bytestext, " ");
    }


    // Put together all of the different elements that will make up the line
    if (logpos > sizeof(logbuff) - (80 + extrapos)) {
        fwrite(logbuff, logpos, 1, logfile);
        logpos = 0;
        fflush(logfile);
    }
    strcpy(&logbuff[logpos], extralog);
    logpos += extrapos;
    extrapos = 0;
    char psbin[9];
    char prefix[7];
    parse_ps(top->spdc1016__DOT__cpu__DOT__P, psbin);

    parse_address_page(offset, prefix);
    logpos += sprintf(&logbuff[logpos],
        "%s:%04X  %s  %-4s %-8s  %02X %02X %02X %04X %s",
        prefix,
        (unsigned)offset,                   // 4000
        bytestext,                          // 0149__
        instruction[inst].mnemonic,         // ORA_
        addresstext,                        // ($49,X)
        top->spdc1016__DOT__cpu__DOT__AXYS[0],
        top->spdc1016__DOT__cpu__DOT__AXYS[2],
        top->spdc1016__DOT__cpu__DOT__AXYS[3],
        top->spdc1016__DOT__cpu__DOT__AXYS[1] | 0x100,
        psbin
    );
    //if (text)
    //    strcpy(text,fulltext);
    //qDebug("%s", fulltext);

    return bytes;
}

const char* GetSymbol(uint16_t address, int bytes)
{
    // If there is no symbol for this address, then just return a string
    // containing the address number
    static char buffer[8];
    switch (bytes) {
    case 2:
        sprintf(buffer, "$%02X", (unsigned)address);
        break;
    case 3:
        sprintf(buffer, "$%04X", (unsigned)address);
        break;
    default:
        buffer[0] = 0;
        break;
    }
    return buffer;
}

const char* byte_to_binary(unsigned char c, char* b)
{
    unsigned char z = 0x80;
    for (int i = 0; i < 8; i++, z >>= 1) {
        b[i] = ((c & z) == z ? '1' : '0');
    }
    b[8] = '\0';

    return b;
}

const char* parse_ps(unsigned char c, char* b)
{
    static const char ps[] = "NV-BDIZC";
    unsigned char z = 0x80;
    for (int i = 0; i < 8; i++, z >>= 1) {
        b[i] = ((c & z) ? ps[i] : '-');
    }
    b[8] = 0;

    return b;
}

void parse_address_page(unsigned short address, char* page)
{
    if (address >= 0x40 && address < 0x80) {
        unsigned short zbaddr[] = {
            0x40, 0x0, 0x0, 0x0, 0x200, 0x240, 0x280, 0x2C0
        };
        uint8_t zb = top->spdc1016__DOT__hub__DOT__io_zp_bsw & 7;
        sprintf(page, "ZB%03X", zbaddr[zb]);
        return;
    }
    if (address >= 0x80 && address < 0x4000) {
        strcpy(page, "     ");
        return;
    }
    if (address < 0x40) {
        strcpy(page, "   io");
        return;
    }
    if (address >= 0x4000 && address < 0xC000) {
        uint8_t bank = top->spdc1016__DOT__hub__DOT__io_bank_switch;
        bool roa = top->spdc1016__DOT__hub__DOT__io_bios_bsw >> 7;
        if (roa) {
            // ram==flash
            sprintf(page, "nor%02X", bank & 0xF);
        } else {
            // rom(but page0 have ram)
            if (bank == 0 && address < 0x8000) {
                strcpy(page, "nor  ");
            } else if (bank <= 127) {
                sprintf(page, "B1 %02X", bank);
            } else {
                uint8_t vol = top->spdc1016__DOT__hub__DOT__io_lcd_segment & 3;
                sprintf(page, "B%d %02X", vol + 1, bank);
            }
        }
    } else if (address < 0xE000) {
        uint8_t bbs = top->spdc1016__DOT__hub__DOT__io_bios_bsw & 0xF;
        // 004| 06|000|002|00C|00E|008|00A|014|016|010|012|01C|01E|018|01A
        if (bbs == 1) {
            strcpy(page, "flash");
        } else {
            sprintf(page, "bios%X", bbs);
        }
    } else {
        strcpy(page, "vectr");
    }
}

void PrependLog(const char* text)
{
    // TODO: log mute
    if (loginited == false || logfile == NULL) {
        return;
    }

    if (extrapos < sizeof(extralog) - 80) {
        extrapos += sprintf(&extralog[extrapos], "%s", text);
    } else {

    }
}

void PrependLogEx(const char* fmt, ...)
{
    // TODO: log mute
    if (loginited == false || logfile == NULL) {
        return;
    }

    va_list vl;
    va_start(vl, fmt);
    int len = vsnprintf(NULL, 0, fmt, vl);
    if (extrapos < sizeof(extralog) - len + 1) {
        extrapos += vsnprintf(&extralog[extrapos], len + 1, fmt, vl);
        //&extralog[extrapos++] = '\n';
    } else {

    }
    va_end(vl);
}

void LogEx(const char* fmt, ...)
{
    // TODO: log mute
    if (loginited == false) {
        InitLogFile();
    }
    if (logfile == NULL) {
        return;
    }

    if (logpos > sizeof(logbuff) - (80 + extrapos)) {
        fwrite(logbuff, logpos, 1, logfile);
        logpos = 0;
        fflush(logfile);
    }

    va_list vl;
    va_start(vl, fmt);
    int len = vsnprintf(NULL, 0, fmt, vl);
    if (logpos < sizeof(logbuff) - len + 1) {
        logpos += vsnprintf(&logbuff[logpos], len + 1, fmt, vl);
    } else {

    }
    va_end(vl);
}

uint8_t GetByte(uint16_t addr)
{
    if (addr >= 0x40 && addr < 0x80) {
        unsigned short zbaddr[] = {
            0x40, 0x0, 0x0, 0x0, 0x200, 0x240, 0x280, 0x2C0
        };
        uint8_t zb = top->spdc1016__DOT__hub__DOT__io_zp_bsw & 7;
        return top->spdc1016__DOT__hub__DOT__sram[zbaddr[zb]];
    }
    if (addr >= 0x80 && addr < 0x4000) {
        return top->spdc1016__DOT__hub__DOT__sram[addr];
    }
    if (addr < 0x40) {
        return 0xFF;
    }
    if (addr >= 0x4000 && addr < 0xC000) {
        bool roa = (top->spdc1016__DOT__hub__DOT__io_bios_bsw & 0x80) != 0;
        uint8_t bank = top->spdc1016__DOT__hub__DOT__io_bank_switch;
        if (roa) {
            // extram(flash)
            return top->spdc1016__DOT__hub__DOT__normem[(bank & 0xF) << 15 | (addr & 0x7FFF)]; // 4,15
        } else {
            // rom(but page0 have extram)
            if (bank == 0 && addr < 0x8000) {
                return top->spdc1016__DOT__hub__DOT__normem[addr & 0x7FFF]; // 0000,15
            } else if (bank <= 127) {
                return top->spdc1016__DOT__hub__DOT__brommem[(bank & 0x7F) << 15 | (addr & 0x7FFF)]; // 00,7,15
            } else {
                uint8_t vol = top->spdc1016__DOT__hub__DOT__io_lcd_segment & 3;
                return top->spdc1016__DOT__hub__DOT__brommem[((vol & 1) + 1) << 22 | (bank & 0x7F) << 15 | (addr & 0x7FFF)]; // 2,7,15
            }
        }
    } else if (addr < 0xE000) {
        // 004| 06|000|002|00C|00E|008|00A|014|016|010|012|01C|01E|018|01A
        uint8_t bbs = top->spdc1016__DOT__hub__DOT__io_bios_bsw & 0xF;
        if (bbs == 1) {
            return top->spdc1016__DOT__hub__DOT__normem[0x6000 | (addr & 0x7FFF)]; // 4,15
        } else {
            return top->spdc1016__DOT__hub__DOT__brommem[(bbs ^ 2) << 13 | (addr & 0x1FFF)]; // 4,13
        }
    } else {
        return top->spdc1016__DOT__hub__DOT__brommem[0x6000 | (addr & 0x1FFF)]; // 2,13
    }

}

uint16_t GetWord(uint16_t addr)
{
    uint8_t lo = GetByte(addr);
    uint8_t hi = GetByte(addr + 1);
    return (hi << 8) | lo;
}
