#include "enemywindow.h"

int enemywindow(Texture2D background) {
    Rectangle next_button = { 540,335,200,50 };

    ClearBackground(RAYWHITE);
    DrawTexture(background, 0, 0, WHITE);
    DrawRectangleRec(next_button, BLACK);
    DrawRectangleLines(545, 340, 190, 40, WHITE);
    DrawText("NEXT", next_button.x + 60, next_button.y + 15, 20, WHITE);

    if (CheckCollisionPointRec(GetMousePosition(), next_button)) {
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            return 2;
        }
    }
    return 1;
}