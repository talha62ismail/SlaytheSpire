#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "character.h"
#include "card.h"
#include "potion.h"
#include "relic.h"
#include "vector.h"
#include <random>
using namespace std;

class Item;
class Card;
class Potion;
class Relic;

class Player : virtual Character {
private:
	int gold;
	int block;
	Card* deck;
	/*MyVector<Potion> potions;
	MyVector<Relic> relics;*/
public:
	MyVector<Card> hand;
	Player(String n, int hp, int g, Card* h);
	void draw_card();
	void play_card(int index);
	void gain_block(int amount);
	void use_potion(int index);
	void apply_relic(int index);
	void add_item(Item item);
};

#endif