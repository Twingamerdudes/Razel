#include <SDL.h>
#include <SDL_mixer.h>
#include <iostream>

using namespace std;

_declspec(dllexport) typedef Mix_Music* Razel_Music;
_declspec(dllexport) typedef Mix_Chunk* Razel_Sound;

_declspec(dllexport) Razel_Music addMusic(string path);
_declspec(dllexport) Razel_Sound addSound(string path);
_declspec(dllexport) void freeMusic(Razel_Music music);
_declspec(dllexport) void freeSound(Razel_Sound sound);
_declspec(dllexport) void playSound(Razel_Sound sound, int channel = -1, int loops = 0);
_declspec(dllexport) void playMusic(Razel_Music music, int loops = -1);
_declspec(dllexport) void pauseMusic();
_declspec(dllexport) void resumeMusic();
_declspec(dllexport) void stopMusic();