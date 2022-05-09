#include <SDL.h>
#include "Headers/Keyboard.h"
#include "Headers/Mouse.h"
#undef main

int* getMousePos() {
	int pos[2];
	int x, y;
	SDL_GetMouseState(&x, &y);
	pos[0] = x;
	pos[1] = y;
	return pos;
}
bool getMouseLeftDown(Razel_Event e) {
	if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_LEFT) {
		return true;
	}
	else {
		return false;
	}
}
bool getMouseRightDown(Razel_Event e) {
	if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_RIGHT) {
		return true;
	}
	else {
		return false;
	}
}
bool getMouseMiddleDown(Razel_Event e) {
	if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_MIDDLE) {
		return true;
	}
	else {
		return false;
	}
}
bool getMouseDown(Razel_Event e) {
	if (e.type == SDL_MOUSEBUTTONDOWN) {
		return true;
	}
	else {
		return false;
	}
}