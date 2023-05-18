#include "sprite.h"

struct Bird : FlappySprite {
  float velocityY = 0;
  float gravitySpeed = 1;
  float terminalY = 30;

  Bird();
  void update();
};
