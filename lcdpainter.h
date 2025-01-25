#ifndef _LCD_PAINTER_H
#define _LCD_PAINTER_H

#include <SDL.h>
#include <stdint.h>

typedef struct tagLCDStripe {
    SDL_Rect texture;
    int left, top;
} TLCDStripe;

class MyLCDView
{
public:
    MyLCDView(const wchar_t* jsonpath);
    ~MyLCDView();
private:
    TLCDStripe fLCDStripes[80];
    SDL_Point fLCDPixelPoint;
    SDL_Rect fLCDPixel, fLCDEmpty;
    SDL_Texture* fLCDTexture;
    int fTextureWidth, fTextureHeight;
    int fLCDWidth, fLCDHeight;
    bool fPixel[160*80]; // TODO: bit or gray
public:
    void loadStripeTexture(const wchar_t* texpath, SDL_Renderer* render);
    void setPixel(int x, int y, bool on);
    void paint(SDL_Renderer* render, bool lcdon);
    int getLCDWidth();
    int getLCDHeight();
private:
    void initLCDStripe(const wchar_t* jsonpath);
};

#endif
