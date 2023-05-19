#include <iostream>
#include <raylib.h>
#include "bird.h"
#include "pipe.h"

int main() {
  std::cout << "Hello world" << "\n";
  const int screenWidth = 288;
  const int screenHeight = 512;

  InitWindow(screenWidth, screenHeight, "Flappy Bird");

  Bird bird;
  Pipe pipe = Pipe(screenWidth - screenWidth/4, screenHeight*0.75);

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
      pipe.update();
      pipe.draw();
      
      EndDrawing();
  }

  CloseWindow();        // Close window and OpenGL context
}
