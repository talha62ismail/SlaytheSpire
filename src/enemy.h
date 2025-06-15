#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include "character.h"

class Enemy : public Character {
private:
	String type;
	int attack;
public:
	Enemy(String n, int hp, String t, int a);
	virtual void die();
};

#endif