#include "sprite.h"
#include <raylib.h>

struct Pipe : FlappySprite {
  Pipe(int x, int y, float yFlip);
  void update();
};
