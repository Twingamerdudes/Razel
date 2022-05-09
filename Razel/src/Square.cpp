#include <SDL.h>
#include "Headers/Window.h"
#include "Headers/Square.h"
#include <iostream>

using namespace std;

typedef SDL_Rect Razel_Square;
Razel_Square addSquare(int x, int y, int w, int h) {
	Razel_Square square = { x, y, w, h };
	return square;
}
void renderSquare(Razel_Square square) {
	SDL_RenderFillRect(renderer, &square);
}