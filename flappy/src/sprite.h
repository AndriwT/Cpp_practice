#pragma once
#include <raylib.h>

struct FlappySprite {
    int x;
    int y;
    Texture2D texture;
    float yFlip = 1;

    virtual void update() {};
    void draw();
};
