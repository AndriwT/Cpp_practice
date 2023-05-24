#include <iostream>
#include <raylib.h>
#include "bird.h"
#include "pipe.h"
#include <vector>

void spawnPipe(std::vector<Pipe*>& pipes, int x) {
  const int screenWidth = 288;
  const int screenHeight = 512;
  Pipe* pipeTop = new Pipe(x, screenHeight * -0.25, -1.0f);
  Pipe* pipeBottom = new Pipe(x, screenHeight*0.75, 1.0f);
  pipes.push_back(pipeTop);
  pipes.push_back(pipeBottom);
};

int main() {
  std::cout << "Hello world" << "\n";
  const int screenWidth = 288;
  const int screenHeight = 512;

  InitWindow(screenWidth, screenHeight, "Flappy Bird");

  Bird bird;
  std::vector<Pipe*> pipes;
  spawnPipe(pipes, screenWidth - screenWidth / 4);
  for (int i = 0; i < 4; i++) {
    spawnPipe(pipes, (screenWidth - screenWidth/4) + ((i + 1) * 160));
  }
  Texture2D background = LoadTexture("assets/sprites/background-day.png");        // Texture loading

  SetTargetFPS(30); 
  // Main game loop
  while (!WindowShouldClose())    // Detect window close button or ESC key
  {
      BeginDrawing();
      ClearBackground(RAYWHITE);
      DrawTexture(background, screenWidth/2 - background.width/2, screenHeight/2 - background.height/2, WHITE);

      bird.update();
      bird.draw();
      for (auto pipe : pipes) {
        pipe->update();
        pipe->draw();
      }
      
      EndDrawing();
  }

  CloseWindow();        // Close window and OpenGL context
};

