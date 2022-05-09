#pragma once
#include <SDL.h>
#include "Keyboard.h"
_declspec(dllexport) int* getMousePos();
_declspec(dllexport) bool getMouseLeftDown(Razel_Event e);
_declspec(dllexport) bool getMouseRightDown(Razel_Event e);
_declspec(dllexport) bool getMouseMiddleDown(Razel_Event e);
_declspec(dllexport) bool getMouseDown(Razel_Event e);