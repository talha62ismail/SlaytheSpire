#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include "character.h"

class Enemy : public Character {
private:
	String type;
	
public:
	int attack;
	Enemy(String n, int hp, String t, int a);
	virtual void die();
	void apply_damage(int amount) override;
};

#endif