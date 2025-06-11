#include <iostream>
#include "card.h"

class skillcard :public Card {
private:
	String type;
	int amount;
public:
	virtual void play(Enemy enemy);
};