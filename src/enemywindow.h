#ifndef ENEMYWINDOW_H
#define ENEMYWINDOW_H

#include <iostream>
#include "raylib.h"
#include "player.h"
using namespace std;

int enemywindow(Texture2D background, Texture2D playersprite, Texture2D enemysprite, Player& player, Enemy& enemy, bool& playerturn);

#endif