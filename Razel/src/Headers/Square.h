#pragma once
#include <SDL.h>
_declspec(dllexport) typedef SDL_Rect Razel_Square;
_declspec(dllexport) Razel_Square addSquare(int x, int y, int w, int h);
_declspec(dllexport) void renderSquare(Razel_Square square);