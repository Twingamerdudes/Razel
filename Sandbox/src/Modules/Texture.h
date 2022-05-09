#pragma once
#include <SDL.h>
#include <iostream>
using namespace std;
_declspec(dllimport) typedef SDL_Texture* Razel_Texture;
_declspec(dllimport) typedef SDL_BlendMode Razel_BlendMode;
_declspec(dllimport) typedef SDL_Rect Clip;
_declspec(dllimport) Razel_Texture addTexture(const char* path, Uint8* colorKey = NULL);
_declspec(dllimport) void setTint(Razel_Texture texture, Uint8 r, Uint8 b, Uint8 g);
_declspec(dllimport) void setBlending(Razel_Texture texture, Razel_BlendMode blend);
_declspec(dllimport) void setAlpha(Razel_Texture texture, Uint8 a);
_declspec(dllimport) void destroyTexture(Razel_Texture texture);
_declspec(dllimport) SDL_Point getWidthAndHeight(Razel_Texture texture);