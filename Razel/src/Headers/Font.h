#pragma once
#include <SDL.h>
#include <SDL_ttf.h>
#include "Texture.h"
_declspec(dllexport) typedef TTF_Font* Razel_Font;
_declspec(dllexport) Razel_Texture addText(Razel_Font font, string text, SDL_Color textColor);
_declspec(dllexport) Razel_Font loadFont(string path, Uint8 size);
_declspec(dllexport) void destroyFont(Razel_Font font);