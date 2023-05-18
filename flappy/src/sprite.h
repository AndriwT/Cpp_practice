#include <raylib.h>

struct FlappySprite {
    int x;
    int y;
    Texture2D texture;

    virtual void update() {};
    void draw();
};
