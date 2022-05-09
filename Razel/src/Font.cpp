#include <iostream>
#include <SDL.h>
#include <SDL_ttf.h>
#include "Headers/Texture.h"
#include "Headers/Window.h"
#include "Headers/Font.h"
#undef main

using namespace std;

typedef TTF_Font* Razel_Font;

Razel_Texture addText(Razel_Font font, string text, SDL_Color textColor) {
	free(NULL);
	SDL_Surface* textSurface = TTF_RenderText_Solid(font, text.c_str(), textColor);
	Razel_Texture texture = SDL_CreateTextureFromSurface(renderer, textSurface);
	SDL_FreeSurface(textSurface);
	return texture;
}
Razel_Font loadFont(string path, Uint8 size) {
	Razel_Font font = TTF_OpenFont(path.c_str(), size);
	return font;
}
void destroyFont(Razel_Font font) {
	TTF_CloseFont(font);
}