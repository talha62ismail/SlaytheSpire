#ifndef CARD_H
#define CARD_H
#include <iostream>
#include "enemy.h"
#include "player.h"
#include "String.h"
using namespace std;

class Player;

class Card {
protected:
	String title;
	int cost;
public:
	virtual void play(Player player, Enemy enemy);
};

#endif