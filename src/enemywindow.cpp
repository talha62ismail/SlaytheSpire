#include "enemywindow.h"

int enemywindow(Texture2D background, Texture2D player) {
    ClearBackground(RAYWHITE);
    DrawTexture(background, 0, 0, WHITE);
    DrawTexture(player, 0, 420, WHITE);
    DrawText("LEVEL: ENEMY", 524.2, 40, 30, WHITE);
    Rectangle c1 = { 167.8, 146.4, 160, 140 };
    Rectangle c2 = { 364.2, 146.4, 160, 140 };
    Rectangle c3 = { 560.2, 146.4, 160, 140 };
    Rectangle c4 = { 756.2, 146.4, 160, 140 };
    Rectangle c5 = { 952.2, 146.4, 160, 140 };
    DrawRectangleRec(c1, BROWN);
    DrawRectangleRec(c2, BROWN);
    DrawRectangleRec(c3, BROWN);
    DrawRectangleRec(c4, BROWN);
    DrawRectangleRec(c5, BROWN);

    return 1;
}