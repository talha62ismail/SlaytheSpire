#include "enemywindow.h"

extern int hand_size;

int enemywindow(Texture2D background, Texture2D playersprite, Texture2D enemysprite, Player& player, Enemy& enemy) {
    String temp1 = temp1.itos(player.hand[0].amount);
    String temp2 = temp2.itos(player.hand[1].amount);
    String temp3 = temp3.itos(player.hand[2].amount);
    String temp4 = temp4.itos(player.hand[3].amount);
    String temp5 = temp5.itos(player.hand[4].amount);
    ClearBackground(RAYWHITE);
    DrawTexture(background, 0, 0, WHITE);
    
    DrawTexture(playersprite, 0, 280, WHITE);
    DrawTexture(enemysprite, 1090, 270, WHITE);
    DrawText(player.getname().getstring(), 70, 660, 30, WHITE);
    DrawText(enemy.getname().getstring(), 1145, 560, 30, WHITE);
    String temp6 = temp6.itos(player.getHP());
    String temp7 = temp7.itos(enemy.getHP());
    String playerhp = "HP = " + temp6;
    String enemyhp = "HP = " + temp7;
    DrawText(playerhp.getstring(), 40, 250, 30, WHITE);
    DrawText(enemyhp.getstring(), 1145, 240, 30, WHITE);

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
    DrawText("Amount = ", 177.4, 203.1, 20, WHITE);
    DrawText("Amount = ", 374.2, 203.1, 20, WHITE);
    DrawText("Amount = ", 570.2, 203.1, 20, WHITE);
    DrawText("Amount = ", 766.2, 203.1, 20, WHITE);
    DrawText("Amount = ", 962.2, 203.1, 20, WHITE);
    DrawText(temp1.getstring(), 277.4, 203.1, 20, WHITE);
    DrawText(temp2.getstring(), 474.2, 203.1, 20, WHITE);
    DrawText(temp3.getstring(), 670.2, 203.1, 20, WHITE);
    DrawText(temp4.getstring(), 866.2, 203.1, 20, WHITE);
    DrawText(temp5.getstring(), 1062.2, 203.1, 20, WHITE);

    if (CheckCollisionPointRec(GetMousePosition(), c1)) {
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            player.apply_damage(10);
        }
            
    }
    
    return 1;
}