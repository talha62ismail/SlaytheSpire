#include <iostream>
#include "src/String.h"
#include "raylib.h"
#include "src/startwindow.h"
#include "src/enemy.h"
#include "src/enemywindow.h"    
#include "src/card.h"
#include "src/gameover.h"
using namespace std;

int hand_size = 5;
int max_energy = 3;

int main() {
    String typeAttack = "Attack";
    String typeBlock = "Block";
    String typeDraw = "Draw";

    Card c1(typeAttack, 6, 1);
    Card c2(typeAttack, 6, 1);
    Card c3(typeAttack, 6, 1);
    Card c4(typeAttack, 6, 1);
    Card c5(typeAttack, 6, 1);
    Card c6(typeAttack, 8, 2);
    Card c7(typeAttack, 8, 2);
    Card c8(typeAttack, 4, 0);
    Card c9(typeAttack, 4, 0);
    Card c10(typeAttack, 10, 3);
    Card c11(typeAttack, 5, 1);
    Card c12(typeAttack, 5, 1);
    Card c13(typeAttack, 5, 1);
    Card c14(typeAttack, 7, 1);
    Card c15(typeAttack, 7, 1);
    Card c16(typeBlock, 5, 1);
    Card c17(typeBlock, 5, 1);
    Card c18(typeBlock, 5, 1);
    Card c19(typeBlock, 5, 1);
    Card c20(typeBlock, 8, 2);
    Card c21(typeBlock, 8, 2);
    Card c22(typeBlock, 3, 0);
    Card c23(typeBlock, 3, 0);
    Card c24(typeBlock, 10, 3);
    Card c25(typeBlock, 6, 1);
    Card c26(typeBlock, 6, 1);
    Card c27(typeBlock, 6, 1);
    Card c28(typeDraw, 1, 1);
    Card c29(typeDraw, 2, 2);
    Card c30(typeDraw, 3, 3);

    MyVector<Card> deck;
    deck.push(c1);
    deck.push(c2);
    deck.push(c3);
    deck.push(c4);
    deck.push(c5);
    deck.push(c6);
    deck.push(c7);
    deck.push(c8);
    deck.push(c9);
    deck.push(c10);
    deck.push(c11);
    deck.push(c12);
    deck.push(c13);
    deck.push(c14);
    deck.push(c15);
    deck.push(c16);
    deck.push(c17);
    deck.push(c18);
    deck.push(c19);
    deck.push(c20);
    deck.push(c21);
    deck.push(c22);
    deck.push(c23);
    deck.push(c24);
    deck.push(c25);
    deck.push(c26);
    deck.push(c27);
    deck.push(c28);
    deck.push(c29);
    deck.push(c30);

    bool enemyscreen = false;
    int current_screen = 0;
    bool turn = true;
    InitWindow(1280, 720, "SLAY THE SPIRE");
    Texture2D background = LoadTexture("assets/mainbackground.png");
    Texture2D enemy_level_background = LoadTexture("assets/enemy_level.png");
    Texture2D playersprite = LoadTexture("assets/ironclad.png");
    Texture2D enemysprite = LoadTexture("assets/slaver.png");

    /*String typeattack = "Attack";
    String typeblock = "Block";
    Card h[5];  
    h[0] = Card(typeattack, 1, 10);
    h[1] = Card(typeattack, 1, 10);
    h[2] = Card(typeattack, 1, 10);
    h[3] = Card(typeattack, 1, 10);
    h[4] = Card(typeblock, 1, 10);*/

    Player ironclad("Ironclad", 100, 10, deck);
    Enemy slaver("Slaver", 40, "Basic", 10);

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        if (ironclad.getHP() <= 0)
            current_screen = -1;

        if (current_screen == 0)
            current_screen = startwindow(background);
        else if (current_screen == 1)
            current_screen = enemywindow(enemy_level_background, playersprite, enemysprite, ironclad, slaver, turn);
        else if (current_screen == -1)
            gameoverwindow();
        else if (current_screen == 2)
            DrawTexture(background, 0, 0, WHITE);

        EndDrawing();
    }
    CloseWindow();

    return 0;
}