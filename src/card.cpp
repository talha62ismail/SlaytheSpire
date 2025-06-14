#include "card.h"

void Card::play(Player player, Enemy enemy) {

}
Card::Card(const String& t, int c, int am){
	type = t;
	cost = c;
	amount = am;
}
Card::Card(): type("null"), cost(0), amount(0){}
char* Card::gettype() {
	return type.getstring();
}