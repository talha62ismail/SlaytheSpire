#include <iostream>
#include "src/String.h"
#include "raylib.h"
#include "src/startwindow.h"
#include "src/enemy.h"
#include "src/enemywindow.h"
using namespace std;

int main() {

    int current_screen = 0;
	InitWindow(1280, 720, "SLAY THE SPIRE");
    Texture2D background = LoadTexture("assets/mainbackground.png");
    Texture2D enemy_level_background = LoadTexture("assets/enemy_level.png");
    
    SetTargetFPS(60);

    while (!WindowShouldClose()) {  
        BeginDrawing();
        
        if (current_screen == 0)
            current_screen = startwindow(background);
        if (current_screen == 1) {
            current_screen = enemywindow(enemy_level_background);
        }
        if (current_screen == 2)
            DrawTexture(background, 0, 0, WHITE);

        EndDrawing();
    }

    CloseWindow();

	return 0;
}

