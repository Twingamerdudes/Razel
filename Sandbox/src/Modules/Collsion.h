#pragma once
#include <SDL.h>
_declspec(dllimport) typedef SDL_Rect Razel_Collider;
_declspec(dllimport) bool isColliding(Razel_Collider col1, Razel_Collider col2);