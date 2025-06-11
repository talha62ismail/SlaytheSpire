#ifndef ATTACKCARD_H
#define ATTACKCARD_H
#include <iostream>
#include "card.h"

class AttackCard :public Card {
private:
	int damage;
	int enemies_attacked;
public:
	virtual void play(Enemy enemy);
};

#endif