#include "enemywindow.h"

extern int hand_size;

int enemywindow(Texture2D background, Texture2D playersprite, Player player) {
    ClearBackground(RAYWHITE);
    DrawTexture(background, 0, 0, WHITE);
    DrawTexture(playersprite, 0, 420, WHITE);
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
    DrawText(player.hand[0].type.getstring(), 177.8, 153.1, 20, WHITE);
    DrawText(player.hand[1].type.getstring(), 374.2, 153.1, 20, WHITE);
    DrawText(player.hand[2].type.getstring(), 570.2, 153.1, 20, WHITE);
    DrawText(player.hand[3].type.getstring(), 766.2, 153.1, 20, WHITE);
    DrawText(player.hand[4].type.getstring(), 962.2, 153.1, 20, WHITE);
    
    return 1;
}