#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include "String.h"
using namespace std;


class Character {
protected:
	String name;
	int HP;
	int maxHP;
public:
	Character();
	Character(String n, int hp);
	void apply_damage(int amount);
	void heal(int amount);
	virtual void die();
	String getname();
	int getHP();
};
#endif