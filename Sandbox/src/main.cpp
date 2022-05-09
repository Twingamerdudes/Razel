#include <iostream>
#include <string>
#include "Modules/Window.h"
#include "Modules/Texture.h"
#include "Modules/Font.h"
#include "Modules/Keyboard.h"
#include "Modules/Mouse.h"
#include "Modules/Sound.h"
#include "Modules/Time.h"
#include "Modules/Collsion.h"
#undef main
Razel_Texture texture = NULL;
Razel_Texture text = NULL;
Razel_Texture colText = NULL;
Razel_Texture texture2 = NULL;
Razel_Event e;
Razel_Font font = NULL;
Razel_Sound SFX = NULL;
string isTouching = "1";
int x = 20;
int y = 0;
Vector2 pos = { x, y, 214, 226 };
Vector2 pos3 = { 300, 100, 422 / 3, 387 / 3 };
Razel_Collider col = pos;
Razel_Collider col2 = pos3;
Vector2 pos2 = { 0, 100 };
Vector2 pos4 = { 200, 450 };
SDL_Point wh;
SDL_Point wh2;
bool pollEvent;
int FPS;
bool minimized;
using namespace std;
bool pollEvents(Razel_Event e) {
	if (SDL_PollEvent(&e)) {
		if (e.type == SDL_QUIT) {
			quit = true;
		}
		if (e.type == SDL_KEYDOWN) {
			if (GetKey(SDLK_LEFT)) {
				x -= 5;
			}
			else if (GetKey(SDLK_RIGHT)) {
				x += 5;
			}
			else if (GetKey(SDLK_UP)) {
				y -= 5;
			}
			else if (GetKey(SDLK_DOWN)) {
				y += 5;
			}
		}
		if (e.type == SDL_MOUSEBUTTONDOWN) {
			x = getMousePos()[0];
			y = getMousePos()[1];
			playSound(SFX);
		}
		if (e.type == SDL_WINDOWEVENT) {
			switch (e.window.event) {
			case SDL_WINDOWEVENT_SIZE_CHANGED:
				renderRun();
				break;
			case SDL_WINDOWEVENT_EXPOSED:
				renderRun();
				break;
			case SDL_WINDOWEVENT_MINIMIZED:
				minimized = true;
				break;
			case SDL_WINDOWEVENT_MAXIMIZED:
				minimized = false;
				break;
			case SDL_WINDOWEVENT_RESTORED:
				minimized = false;
				break;
			}
		}
		return true;
	}
	else {
		return false;
	}
}
void run() {
	quit = false;
	SDL_Color textColor = { 255, 0, 0 };
	while (!quit) {
		pollEvent = pollEvents(e);
		FPS = getFPS();
		pos = { x, y, 216, 226 };
		col = pos;
		renderClear();
		renderTexture(texture, &pos);
		renderTexture(text, &pos2);
		renderTexture(texture2, &pos3);
		renderTexture(colText, &pos4);
		if (isColliding(col, col2)) {
			//cout << "Is colliding" << endl;
			isTouching = to_string(isColliding(col, col2));
		}
		else {
			isTouching = "0";
		}
		setColor(0xDC, 0x14, 0x3C, 0xFF);
		setColor(0xFF, 0xFF, 0xFF, 0xFF);
		if (!minimized) {
			renderRun();
		}
		destroyTexture(colText);
		colText = NULL;
		colText = addText(font, isTouching, textColor);
		wh2 = getWidthAndHeight(colText);
		pos4 = { 290, 400, wh2.x, wh2.y };
	}

	destroyTexture(text);
	text = NULL;

	destroyTexture(texture);
	texture = NULL;

	destroyFont(font);
	font = NULL;


	close();
}
int main() {
	initWindow("Razel Window", 640, 480, true, false);
	texture = addTexture("assets/bfNew.png");
	texture2 = addTexture("assets/bf.jpg");
	SDL_Color textColor = { 255, 0, 0 };
	font = loadFont("assets/Roboto-Medium.ttf", 40);
	text = addText(font, "RAZEL PROJECT", textColor);
	colText = addText(font, isTouching, textColor);
	wh = getWidthAndHeight(text);
	pos2 = { 150, 0, wh.x, wh.y };
	wh2 = getWidthAndHeight(colText);
	pos4 = { 290, 350, wh2.x, wh2.y };
	SFX = addSound("assets/pop.wav");
	setBlending(texture, SDL_BLENDMODE_BLEND);
	setAlpha(texture, 150);
	renderClear();
	setColor(0xDC, 0x14, 0x3C, 0xFF);
	renderTexture(texture, &pos);
	renderRun();
	run();
	return 0;
}