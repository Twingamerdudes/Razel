#pragma once
#include <SDL.h>
#include "Keyboard.h"
_declspec(dllimport) int* getMousePos();
_declspec(dllimport) bool getMouseLeftDown(Razel_Event e);
_declspec(dllimport) bool getMouseRightDown(Razel_Event e);
_declspec(dllimport) bool getMouseMiddleDown(Razel_Event e);
_declspec(dllimport) bool getMouseDown(Razel_Event e);