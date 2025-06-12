#include <iostream>
#include "src/String.h"
#include "raylib.h"
using namespace std;

int main() {

	InitWindow(1280, 720, "SLAY THE SPIRE");

    Texture2D background = LoadTexture("assets/mainbackground.png");
    Rectangle start_button = { 540,335,200,50 };

    SetTargetFPS(60);

    while (!WindowShouldClose()) {  
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawTexture(background, 0, 0, WHITE);
        DrawRectangleRec(start_button, BLACK);
        DrawRectangleLines(545, 340, 190, 40, WHITE);
        DrawText("START", start_button.x + 60, start_button.y + 15, 20, WHITE);

        if (CheckCollisionPointRec(GetMousePosition(), start_button)) {
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
            {
                cout << "GAME STARTED!";
            }
        }

        EndDrawing();
    }

    CloseWindow();

	return 0;
}