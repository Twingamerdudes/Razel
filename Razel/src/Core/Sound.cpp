#include <SDL.h>
#include <SDL_mixer.h>
#include <iostream>
#include "Headers/Sound.h"

using namespace std;

typedef Mix_Music* Razel_Music;
typedef Mix_Chunk* Razel_Sound;

Razel_Music addMusic(string path) {
	Razel_Music output = Mix_LoadMUS(path.c_str());
	return output;
}
Razel_Sound addSound(string path) {
	Razel_Sound output = Mix_LoadWAV(path.c_str());
	return output;
}
void freeMusic(Razel_Music music) {
	Mix_FreeMusic(music);
}
void freeSound(Razel_Sound sound) {
	Mix_FreeChunk(sound);
}
void playSound(Razel_Sound sound, int channel, int loops) {
	Mix_PlayChannel(channel, sound, loops);
}
void playMusic(Razel_Music music, int loops) {
	Mix_PlayMusic(music, loops);
}
void pauseMusic() {
	Mix_PauseMusic();
}
void resumeMusic() {
	Mix_ResumeMusic();
}
void stopMusic() {
	Mix_HaltMusic();
}