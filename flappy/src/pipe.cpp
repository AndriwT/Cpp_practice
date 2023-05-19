#include "pipe.h"


Pipe::Pipe(int x, int y) {
  this->x = x;
  this->y = y;
  this->texture = LoadTexture("assets/sprites/pipe-green.png");
};

void Pipe::update() {
 this->x -= 5;
};
