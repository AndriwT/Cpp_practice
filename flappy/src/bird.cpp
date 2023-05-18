#include "bird.h"

void Bird::update() {
  if (IsKeyDown(KEY_SPACE)) {
    this->velocityY = -12;
  }
  this->velocityY += this->gravitySpeed;
  if (this->velocityY >= this->terminalY) {
    this->velocityY = this->terminalY;
  }

  this->y += this->velocityY;
}

Bird::Bird() {
  const int screenWidth = 288;
  const int screenHeight = 512;
  this->texture =  LoadTexture("assets/sprites/yellowbird-midflap.png");        // Texture loading
  this->x = screenWidth / 4;
  this->y = screenHeight / 2;
}
