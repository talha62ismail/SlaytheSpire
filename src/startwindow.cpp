#include "startwindow.h"

int startwindow(Texture2D background) {
    Rectangle start_button = { 540,335,200,50 };

    ClearBackground(RAYWHITE);
    DrawTexture(background, 0, 0, WHITE);
    DrawRectangleRec(start_button, BLACK);
    DrawRectangleLines(545, 340, 190, 40, WHITE);
    DrawText("START", start_button.x + 60, start_button.y + 15, 20, WHITE);

    DrawText("SLAY THE SPIRE", 335, 100, 70, WHITE);

    if (CheckCollisionPointRec(GetMousePosition(), start_button)) {
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            return 1;
        }
    }
}