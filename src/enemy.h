#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include "character.h"

class Enemy : virtual Character {
private:
	String type;
	int attack;
public:
	virtual void die();
};

#endif