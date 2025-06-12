#ifndef POTION_H
#define POTION_H
#include <iostream>
#include "item.h"
using namespace std;

class Potion : public Item {
public:
	void use();
};

#endif