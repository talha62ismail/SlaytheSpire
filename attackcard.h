#include <iostream>
#include "card.h"

class attackcard :public Card {
private:
	int damage;
	int enemies_attacked;
public:
	virtual void play(Enemy enemy);
};