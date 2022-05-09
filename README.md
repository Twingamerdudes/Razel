![RazelLogo](https://user-images.githubusercontent.com/81382687/167321743-166e7597-3356-4188-a27b-ecd63cb15b1d.png)
## Introduction
Razel is a game engine I made for the tool jam 2, here is it's itch page: https://twingamerdudes.itch.io/razel. It is menat to make games in cpp easier to make. It handles many stuff for you like textures, text rendering, collsion, and more!
## Compiling
So you want to modify Razel's source, well it's easy!
First get visual studio 2019 with desktop app development with cpp enabled. Next load up the project in vs.
After that right click the Razel project and click build (you can also do this to the Sandbox project).
## Running sandbox
So if you compiled sandbox and you've tried running it, it does not work. Why?
Well you need Razel.dll sdl_mixer.dll and sdl_ttf.dll. So first to get Razel.dll, go to your compilied Razel folder and find Razel.dll in that, then
copy that and paste it in the sandbox folder. Then for sdl_ttf.dll and sdl_mixer.dll, go inside the SDL_mixer-devel and the SDL_ttf-devel folder and then go to lib/x64 and then find the dll there. Then copy and paste the dlls into the sandbox bin folder. The executable should be working now.
Here's how it should look (ignore the assets folder)
![Folder](https://user-images.githubusercontent.com/81382687/167324090-2b451ab0-ea09-4d50-a20a-aeb61cdb5ae0.png)
