#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "character.h"
#include "card.h"
#include "potion.h"
#include "relic.h"
using namespace std;

class Player : virtual Character {
private:
	int gold;
	int block;
	Card* deck;
	Card* hand;
	Potion* potions;
	Relic* relics;
public:
	void draw_card();
	void play_card(int index);
	void gain_block(int amount);
	void use_potion(int index);
	void apply_relic(int index);
	void add_item(Item item);
};

#endif