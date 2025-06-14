#ifndef ATTACKCARD_H
#define ATTACKCARD_H
#include <iostream>
#include "card.h"
#include "character.h"

class AttackCard :public Card {
private:
	int damage;
public:
	virtual void play(Character& enemy);
	int getdamage();
};

#endif