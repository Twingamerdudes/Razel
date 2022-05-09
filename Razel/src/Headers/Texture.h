#pragma once
#include <SDL.h>
#include <iostream>
using namespace std;
_declspec(dllexport) typedef SDL_Texture* Razel_Texture;
_declspec(dllexport) typedef SDL_BlendMode Razel_BlendMode;
_declspec(dllexport) typedef SDL_Rect Clip;
_declspec(dllexport) Razel_Texture addTexture(const char* path, Uint8* colorKey = NULL);
_declspec(dllexport) void setTint(Razel_Texture texture, Uint8 r, Uint8 b, Uint8 g);
_declspec(dllexport) void setBlending(Razel_Texture texture, Razel_BlendMode blend);
_declspec(dllexport) void setAlpha(Razel_Texture texture, Uint8 a);
_declspec(dllexport) void destroyTexture(Razel_Texture texture);
_declspec(dllexport) SDL_Point getWidthAndHeight(Razel_Texture texture);