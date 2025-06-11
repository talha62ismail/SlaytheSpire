#include <iostream>
#include "card.h"

class SkillCard :public Card {
private:
	String type;
	int amount;
public:
	virtual void play(Enemy enemy);
};