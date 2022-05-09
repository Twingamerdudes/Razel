#include <iostream>
#include <fstream>
#pragma warning(push, 0)
#include <SDL.h>
#include <SDL_image.h>
#pragma warning(pop)
#include "Headers/Window.h"
#include "Headers/Texture.h"
#undef main

using namespace std;

typedef SDL_Texture* Razel_Texture;
typedef SDL_BlendMode Razel_BlendMode;
typedef SDL_Rect Clip;


Razel_Texture addTexture(const char* path, Uint8 *colorKey) {
	free(NULL);

	Razel_Texture texture = NULL;
	SDL_Surface* loadedTexture = IMG_Load(path);
	if (colorKey != NULL) {
		SDL_SetColorKey(loadedTexture, SDL_TRUE, SDL_MapRGB(loadedTexture->format, colorKey[0], colorKey[1], colorKey[2]));
	}
	texture = SDL_CreateTextureFromSurface(renderer, loadedTexture);
	SDL_FreeSurface(loadedTexture);
	return texture;
}
void setTint(Razel_Texture texture, Uint8 r, Uint8 b, Uint8 g) {
	SDL_SetTextureColorMod(texture, r, g, b);
}
void setBlending(Razel_Texture texture, Razel_BlendMode blend) {
	SDL_SetTextureBlendMode(texture, blend);
}
void setAlpha(Razel_Texture texture, Uint8 a) {
	SDL_SetTextureAlphaMod(texture, a);
}
void destroyTexture(Razel_Texture texture) {
	SDL_DestroyTexture(texture);
}
SDL_Point getWidthAndHeight(Razel_Texture texture) {
	SDL_Point point;
	SDL_QueryTexture(texture, NULL, NULL, &point.x, &point.y);
	return point;
}