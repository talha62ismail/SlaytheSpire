#include "card.h"

void Card::play(Player& player, Enemy& enemy) {
	if (type == "attack"){
		enemy.apply_damage(amount);
	}
	else if (type == "block") {
		player.gain_block(amount);
	}
	else if (type == "draw") {
		for (int i = 0;i < amount;i++)
			player.draw_card();
	}
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