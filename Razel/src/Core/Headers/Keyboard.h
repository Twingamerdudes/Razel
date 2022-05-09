#pragma once
_declspec(dllexport) typedef SDL_Event Razel_Event;
_declspec(dllexport) typedef SDL_Keycode Keycode;
_declspec(dllexport) bool GetKeyDown(Razel_Event e, Keycode key);
_declspec(dllexport) bool GetKeyUp(Razel_Event e, Keycode key);
_declspec(dllexport) bool GetKey(Uint8 key);