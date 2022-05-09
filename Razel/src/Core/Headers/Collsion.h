#pragma once
#include <SDL.h>
_declspec(dllexport) typedef SDL_Rect Razel_Collider;
_declspec(dllexport) bool isColliding(Razel_Collider col1, Razel_Collider col2);