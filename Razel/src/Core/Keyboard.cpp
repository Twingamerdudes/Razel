#include <SDL.h>
#include "../Headers/Window.h"
#include "Headers/Keyboard.h"
#include <iostream>
#undef main

typedef SDL_Event Razel_Event;
typedef SDL_Keycode Keycode;
using namespace std;
bool GetKeyDown(Razel_Event e, Keycode key) {
    if (e.type == SDL_KEYDOWN) {
        if (e.key.keysym.sym == key) {
            return true;
        }
        else {
            return false;
        }
    }
    return false;
}
bool GetKeyUp(Razel_Event e, Keycode key) {
    if (e.type == SDL_KEYUP) {
        if (e.key.keysym.sym == key) {
            return true;
        }
        else {
            return false;
        }
    }
}
bool GetKey(Uint8 key) {
    const Uint8* keyState = SDL_GetKeyboardState(NULL);
    if (keyState[key]) {
        return true;
    }
    else {
        return false;
    }
}