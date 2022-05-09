#pragma once
#include "Texture.h"
#include "../Core/Headers/Vector2.h"
#include <iostream>
using namespace std;
_declspec(dllexport) void initWindow(const char* title, const int SCREEN_WIDTH, const int SCREEN_HEIGHT, bool VSync = false, bool resizable = true);
_declspec(dllexport) void close();
_declspec(dllexport) void windowRun();
_declspec(dllexport) void renderRun();
_declspec(dllexport) void renderTexture(Razel_Texture texture, const Vector2* pos = NULL, const Clip* clip = NULL, double rotation = 0, SDL_RendererFlip flip = SDL_FLIP_NONE, SDL_Point* center = NULL);
_declspec(dllexport) void renderClear();
_declspec(dllexport) void setColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a);
_declspec(dllexport) void LOG(string message);
_declspec(dllexport) void LOG_INFO(string message);
_declspec(dllexport) void LOG_WARN(string message);
_declspec(dllexport) void LOG_ERROR(string message);
_declspec(dllexport) extern bool quit;
extern SDL_Renderer* renderer;