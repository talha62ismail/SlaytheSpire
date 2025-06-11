#include "attackcard.h"

void AttackCard::play(Enemy enemy) {
	enemy.apply_damage(damage);
}