#include <SDL.h>
#include <iostream>
#include "Headers/Time.h"

using namespace std;

double prevTime;
double currentTime;
double deltaTime;
int FPS;
int countedFrames = 14;
void Delay(int time) {
	SDL_Delay(time);
}
double GetTime() {
	return SDL_GetTicks();
}
double getDelta() {
	prevTime = currentTime;
	currentTime = GetTime();
	deltaTime = (prevTime - currentTime);
	return deltaTime;
}
float getFPS() {
	float averageFPS = countedFrames / (GetTime() / 1000.f);
	if (averageFPS > 2000000)
	{
		averageFPS = 60;
	}
	countedFrames++;
	return averageFPS;
}