#pragma once
#include <SDL.h>
#include <SDL_ttf.h>
#include "Texture.h"
_declspec(dllimport) typedef TTF_Font* Razel_Font;
_declspec(dllimport) Razel_Texture addText(Razel_Font font, string text, SDL_Color textColor);
_declspec(dllimport) Razel_Font loadFont(string path, Uint8 size);
_declspec(dllimport) void destroyFont(Razel_Font font);