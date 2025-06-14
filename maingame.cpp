#include <iostream>
#include "src/String.h"
#include "raylib.h"
#include "src/startwindow.h"
#include "src/enemy.h"
#include "src/enemywindow.h"    
#include "src/card.h"
using namespace std;

int hand_size = 5;

int main() {

    bool enemyscreen = false;
    int current_screen = 0;
    InitWindow(1280, 720, "SLAY THE SPIRE");
    Texture2D background = LoadTexture("assets/mainbackground.png");
    Texture2D enemy_level_background = LoadTexture("assets/enemy_level.png");
    Texture2D player = LoadTexture("assets/ironclad.png");
    
    String type = "Attack Card";
    Card h[5];  
    h[0] = Card(type, 1, 10);
    h[1] = Card(type, 1, 10);
    h[2] = Card(type, 1, 10);
    h[3] = Card(type, 1, 10);
    h[4] = Card(type, 1, 10);

    Player ironclad("Ironclad", 100, 10, h);

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        if (current_screen == 0)
            current_screen = startwindow(background);
        else if (current_screen == 1)
            current_screen = enemywindow(enemy_level_background, player, ironclad);
        if (current_screen == 2)
            DrawTexture(background, 0, 0, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
