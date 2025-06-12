#ifndef MERCHANT_H
#define MERCHANT_H
#include <iostream>
#include "item.h"
using namespace std;

class Merchant {
private:
	Item* items;
public:
	Merchant(Item* items);
	void additem(Item item);
	void buyitem(Item item);
	void display();
	~Merchant();
};


#endif