#include "enemywindow.h"

int enemywindow(Texture2D background, Texture2D player) {
    ClearBackground(RAYWHITE);
    DrawTexture(background, 0, 0, WHITE);
    DrawTexture(player, 0, 420, WHITE);
    Rectangle p = { 0, 420, (float)player.width, (float)player.height };

    if (CheckCollisionPointRec(GetMousePosition(), p)) {
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            cout << "touching player";
        }
    }
    return 1;
}