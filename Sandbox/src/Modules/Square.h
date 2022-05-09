#pragma once
#include <SDL.h>
_declspec(dllimport) typedef SDL_Rect Razel_Square;
_declspec(dllimport) Razel_Square addSquare(int x, int y, int w, int h);
_declspec(dllimport) void renderSquare(Razel_Square square);