#include <iostream>
#include "src/String.h"
#include "raylib.h"
#include "src/startwindow.h"
using namespace std;

int main() {

	InitWindow(1280, 720, "SLAY THE SPIRE");

    Texture2D background = LoadTexture("assets/mainbackground.png");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {  
        BeginDrawing();
       
        startwindow(background);

        EndDrawing();
    }

    CloseWindow();

	return 0;
}

