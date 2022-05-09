#pragma once
#include "Texture.h"
#include "Vector2.h"
#include <iostream>
using namespace std;
_declspec(dllimport) void initWindow(const char* title, const int SCREEN_WIDTH, const int SCREEN_HEIGHT, bool VSync = false, bool resizable = true);
_declspec(dllimport) void close();
_declspec(dllimport) void windowRun();
_declspec(dllimport) void renderRun();
_declspec(dllimport) void renderTexture(Razel_Texture texture, const Vector2* pos = NULL, const Clip* clip = NULL, double rotation = 0, SDL_RendererFlip flip = SDL_FLIP_NONE, SDL_Point* center = NULL);
_declspec(dllimport) void renderClear();
_declspec(dllimport) void setColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a);
_declspec(dllimport) void LOG(string message);
_declspec(dllimport) void LOG_INFO(string message);
_declspec(dllimport) void LOG_WARN(string message);
_declspec(dllimport) void LOG_ERROR(string message);
_declspec(dllimport) extern bool quit;