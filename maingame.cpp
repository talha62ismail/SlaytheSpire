#include <iostream>
#include "src/String.h"
#include "raylib.h"
#include "src/startwindow.h"
#include "src/enemy.h"
#include "src/enemywindow.h"    
#include "src/card.h"
#include "src/gameover.h"
using namespace std;

int hand_size = 5;
int max_energy = 3;

int main() {

    bool enemyscreen = false;
    int current_screen = 0;
    bool turn = true;
    InitWindow(1280, 720, "SLAY THE SPIRE");
    Texture2D background = LoadTexture("assets/mainbackground.png");
    Texture2D enemy_level_background = LoadTexture("assets/enemy_level.png");
    Texture2D playersprite = LoadTexture("assets/ironclad.png");
    Texture2D enemysprite = LoadTexture("assets/slaver.png");

    String type = "Attack";
    Card h[5];  
    h[0] = Card(type, 1, 10);
    h[1] = Card(type, 1, 10);
    h[2] = Card(type, 1, 10);
    h[3] = Card(type, 1, 10);
    h[4] = Card("Block", 1, 10);

    Player ironclad("Ironclad", 100, 10, h);
    Enemy slaver("Slaver", 40, "Basic", 10);

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        if (ironclad.getHP() <= 0)
            current_screen = -1;

        if (current_screen == 0)
            current_screen = startwindow(background);
        else if (current_screen == 1)
            current_screen = enemywindow(enemy_level_background, playersprite, enemysprite, ironclad, slaver, turn);
        else if (current_screen == -1)
            gameoverwindow();
        else if (current_screen == 2)
            DrawTexture(background, 0, 0, YELLOW);

        EndDrawing();
    }
    CloseWindow();

    return 0;
}