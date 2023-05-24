#include "sprite.h"

void FlappySprite::draw() {
    Vector2 position = {
      static_cast<float>(this->x),
      static_cast<float>(this->y),
    };
    Rectangle source = {
      0.0f,
      0.0f,
      static_cast<float>(this->texture.width),
      static_cast<float>(this->texture.height * this->yFlip)
    };
    DrawTextureRec(this->texture, source, position, WHITE);
};





