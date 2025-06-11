#include <iostream>
#include "enemy.h"
#include "String.h"
using namespace std;

class Card {
protected:
	String title;
	int cost;
public:
	virtual void play(Enemy enemy);
};