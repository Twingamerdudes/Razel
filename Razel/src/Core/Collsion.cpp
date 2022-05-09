#include <SDL.h>
#include <iostream>
#include "Headers/Collsion.h"

using namespace std;

typedef SDL_Rect Razel_Collider;
bool isColliding(Razel_Collider col1, Razel_Collider col2) {
    int leftA, leftB;
    int rightA, rightB;
    int topA, topB;
    int bottomA, bottomB;

    leftA = col1.x;
    rightA = col1.x + col1.w;
    topA = col1.y;
    bottomA = col1.y + col1.h;

    leftB = col2.x;
    rightB = col2.x + col2.w;
    topB = col2.y;
    bottomB = col2.y + col2.h;

    if (bottomA <= topB)
    {
        return false;
    }
    else if (topA >= bottomB)
    {
        return false;
    }
    else if (rightA <= leftB)
    {
        return false;
    }
    else if (leftA >= rightB)
    {
        return false;
    }
    else {
        return true;
    }
}