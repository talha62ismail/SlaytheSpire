#include "enemywindow.h"

extern int hand_size;
extern int max_energy;

int enemywindow(Texture2D background, Texture2D playersprite, Texture2D enemysprite, Player& player, Enemy& enemy, bool& playerturn) {
    String temp1 = temp1.itos(player.hand[0].amount);
    String temp2 = temp2.itos(player.hand[1].amount);
    String temp3 = temp3.itos(player.hand[2].amount);
    String temp4 = temp4.itos(player.hand[3].amount);
    String temp5 = temp5.itos(player.hand[4].amount);

    String t1 = t1.itos(player.hand[0].cost);
    String t2 = t2.itos(player.hand[1].cost);
    String t3 = t3.itos(player.hand[2].cost);
    String t4 = t4.itos(player.hand[3].cost);
    String t5 = t5.itos(player.hand[4].cost);
    

    ClearBackground(RAYWHITE);
    DrawTexture(background, 0, 0, WHITE);

    DrawTexture(playersprite, 0, 280, WHITE);
    DrawTexture(enemysprite, 1090, 270, WHITE);
    DrawText(player.getname().getstring(), 70, 660, 30, WHITE);
    DrawText(enemy.getname().getstring(), 1145, 560, 30, WHITE);
    String temp6 = temp6.itos(player.getHP());
    String temp7 = temp7.itos(enemy.getHP());
    String playerhp = "HP:" + temp6;
    String enemyhp = "HP:" + temp7;
    DrawText(playerhp.getstring(), 40, 250, 30, WHITE);
    DrawText(enemyhp.getstring(), 1145, 240, 30, WHITE);
    String temp8 = temp8.itos(player.energy);
    String playerenergy = "Energies: " + temp8;
    DrawText(playerenergy.getstring(), 100, 40, 20, WHITE);
    String temp9 = temp9.itos(player.getblock());
    String playerblock = "Block: " + temp9;
    DrawText(playerblock.getstring(), 210, 350, 20, WHITE);
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
    DrawText("Cost = ", 180.4, 243.1, 20, WHITE);
    DrawText("Cost = ", 384.2, 243.1, 20, WHITE);
    DrawText("Cost = ", 580.2, 243.1, 20, WHITE);
    DrawText("Cost = ", 776.2, 243.1, 20, WHITE);
    DrawText("Cost = ", 972.2, 243.1, 20, WHITE);
    DrawText(t1.getstring(), 277.4, 243.1, 20, WHITE);
    DrawText(t2.getstring(), 474.2, 243.1, 20, WHITE);
    DrawText(t3.getstring(), 670.2, 243.1, 20, WHITE);
    DrawText(t4.getstring(), 866.2, 243.1, 20, WHITE);
    DrawText(t5.getstring(), 1062.2, 243.1, 20, WHITE);
    static bool card1 = true;
    static bool card2 = true;
    static bool card3 = true;
    static bool card4 = true;
    static bool card5 = true;

    if (playerturn) {
        Rectangle endturn = { 300, 600, 150, 50 };
        DrawRectangleRec(endturn, DARKGRAY);
        DrawText("End Turn", 320, 615, 20, WHITE);

        if (CheckCollisionPointRec(GetMousePosition(), endturn)){
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                playerturn = false;
                player.energy = max_energy;
            }
        }

        if (player.hand[0].cost <= player.energy && card1) {
            if (CheckCollisionPointRec(GetMousePosition(), c1)) {
                if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                    player.hand[0].play(player, enemy);
                    player.energy -= player.hand[0].cost;
                    card1 = false;
                }
            }
        }
        if (player.hand[1].cost <= player.energy && card2) {
            if (CheckCollisionPointRec(GetMousePosition(), c2)) {
                if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                    player.hand[1].play(player, enemy);
                    player.energy -= player.hand[1].cost;
                    card2 = false;
                }
            }
        }
        if (player.hand[2].cost <= player.energy && card3) {
            if (CheckCollisionPointRec(GetMousePosition(), c3)) {
                if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                    player.hand[2].play(player, enemy);
                    player.energy -= player.hand[2].cost;
                    card3 = false;
                }
            }
        }
        if (player.hand[3].cost <= player.energy && card4) {
            if (CheckCollisionPointRec(GetMousePosition(), c4)) {
                if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                    player.hand[3].play(player, enemy);
                    player.energy -= player.hand[3].cost;
                    card4 = false;
                }
            }
        }
        if (player.hand[4].cost <= player.energy && card5) {
            if (CheckCollisionPointRec(GetMousePosition(), c5)) {
                if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                    player.hand[4].play(player, enemy);
                    player.energy -= player.hand[4].cost;
                    card5 = false;
                }
            }
        }

    }
    else {
        player.apply_damage(enemy.attack);
        playerturn = true;
        card1 = card2 = card3 = card4 = card5 = true;
        player.shuffle_hand();
    }

    if (enemy.getHP() <= 0)
        return 2;

    return 1;
}