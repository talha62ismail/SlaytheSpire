#ifndef CHEST_H
#define CHEST_H
#include <iostream>
#include "item.h"
using namespace std;

class Chest {
private:
	String type;
	Item* items;
	int gold;
public:
	void open();
};

#endif