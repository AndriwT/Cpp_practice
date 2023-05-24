#include "pipe.h"


Pipe::Pipe(int x, int y, float yFlip) {
  this->x = x;
  this->y = y;
  this->texture = LoadTexture("assets/sprites/pipe-green.png");
  this->yFlip = yFlip;
};

void Pipe::update() {
 this->x -= 5;
};
