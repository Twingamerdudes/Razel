#pragma once
#include <SDL.h>
_declspec(dllimport) typedef SDL_Event Razel_Event;
_declspec(dllimport) typedef SDL_Keycode Keycode;
_declspec(dllimport) bool GetKeyDown(Razel_Event e, Keycode key);
_declspec(dllimport) bool GetKeyUp(Razel_Event e, Keycode key);
_declspec(dllimport) bool GetKey(Uint8 key);