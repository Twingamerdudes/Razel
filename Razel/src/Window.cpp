#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include "Headers/Window.h"
#include "Headers/Texture.h"
#include "Core/Headers/Vector2.h"
#include "Core/Headers/LogManager.h"
#include "Core/Headers/Log.h"
#undef main

using namespace std;

SDL_Window* window = NULL;

SDL_Renderer* renderer = NULL;

bool quit;
void initWindow(const char* title, const int SCREEN_WIDTH, const int SCREEN_HEIGHT, bool VSync, bool resizable) {
	init_spdlog();
	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0)
	{
		cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << endl;
		string temp;
		cin >> temp;
		exit(1);
	}
	else
	{
		if (resizable) {
			window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
		}
		else {
			window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		}
		if (window == NULL)
		{
			cout << "WINDOW COULD NOT BE CREATED! SDL_ERROR: " << SDL_GetError() << endl;
		}
		else
		{
			if (VSync) {
				renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
			}
			else {
				renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
			}
			if (renderer == NULL) {
				cout << "SDL RENDERER COULD NOT BE CREATED! SDL_ERROR" << SDL_GetError() << endl;
			}
			else {
				int imgPNGFlags = IMG_INIT_PNG;
				int imgJPGFlags = IMG_INIT_JPG;
				if (!(IMG_Init(imgPNGFlags) & imgPNGFlags) && !(IMG_Init(imgJPGFlags) & imgJPGFlags)) {
					cout << "SDL IMAGE COULD NOT BE INITALIZED! SDL_IMAGE ERROR: " << IMG_GetError() << endl;
				}
				else {
					if (TTF_Init() == -1) {
						cout << "SDL TTF COULD NOT BE INITALIZED! SDL_TTF ERROR: " << TTF_GetError() << endl;
					}
					else {
						if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
							cout << "SDL MIXER COULD NOT BE INITALIZED! SDL_MIXER ERROR: " << Mix_GetError() << endl;
						}
						else {
							RAZEL_INFO("RAZEL HAS LOADED");
						}
					}
				}
			}
		}
	}
}
void close() {
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	window = NULL;
	renderer = NULL;

	shutdown();

	Mix_Quit();
	TTF_Quit();
	IMG_Quit();
	SDL_Quit();
}
void windowRun() {
	SDL_UpdateWindowSurface(window);
}
void renderRun() {
	SDL_RenderPresent(renderer);
}
void renderTexture(Razel_Texture texture, const Vector2* pos, const Clip* clip, double rotation, SDL_RendererFlip flip, SDL_Point* center) {
	SDL_RenderCopyEx(renderer, texture, clip, pos, rotation, center, flip);
}
void renderClear() {
	SDL_RenderClear(renderer);
}
void setColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a) {
	SDL_SetRenderDrawColor(renderer, r, b, g, a);
}
int main() {
	//initWindow();
	return 0;
}
void LOG(string message) {
	RAZEL_TRACE(message);
}
void LOG_INFO(string message) {
	RAZEL_INFO(message);
}
void LOG_WARN(string message) {
	RAZEL_WARN(message);
}
void LOG_ERROR(string message) {
	RAZEL_ERROR(message);
}
