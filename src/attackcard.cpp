#include "attackcard.h"

void AttackCard::play(Character& enemy) {
	enemy.apply_damage(damage);
}

int AttackCard::getdamage() {
	return damage;
}