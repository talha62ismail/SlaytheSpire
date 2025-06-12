#include <iostream>
#include "src/String.h"
#include "raylib.h"
using namespace std;

int main() {

	InitWindow(1000, 700, "SLAY THE SPIRE");

    while (!WindowShouldClose()) {  
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("WELCOME TO SLAY THE SPIRE!", 150, 280, 20, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();

	return 0;
}