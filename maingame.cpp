#include <iostream>
#include "src/String.h"
#include "raylib.h"
using namespace std;

int main() {

	InitWindow(1536, 1024, "SLAY THE SPIRE");

    Texture2D background = LoadTexture("assets/enemy_level_background.png");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {  
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawTexture(background, 0, 0, WHITE);
        EndDrawing();
    }

    CloseWindow();

	return 0;
}