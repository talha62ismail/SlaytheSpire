#ifndef CARD_H
#define CARD_H
#include <iostream>
#include "enemy.h"
#include "player.h"
#include "String.h"
using namespace std;

class Player;

class Card {
public:
	virtual void play(Player player, Enemy enemy);
	String type;
	int cost;
	int amount;
};

#endif