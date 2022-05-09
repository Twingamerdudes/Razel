#include <SDL.h>
#include <SDL_mixer.h>
#include <iostream>

using namespace std;

_declspec(dllimport) typedef Mix_Music* Razel_Music;
_declspec(dllimport) typedef Mix_Chunk* Razel_Sound;

_declspec(dllimport) Razel_Music addMusic(string path);
_declspec(dllimport) Razel_Sound addSound(string path);
_declspec(dllimport) void freeMusic(Razel_Music music);
_declspec(dllimport) void freeSound(Razel_Sound sound);
_declspec(dllimport) void playSound(Razel_Sound sound, int channel = -1, int loops = 0);
_declspec(dllimport) void playMusic(Razel_Music music, int loops = -1);
_declspec(dllimport) void pauseMusic();
_declspec(dllimport) void resumeMusic();
_declspec(dllimport) void stopMusic();