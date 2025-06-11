#include "character.h"

Character::Character() : name{ "Character" }, HP(100), maxHP(100) {}
Character::Character(String n, int hp) : name(n), HP(hp), maxHP(hp) {}
void Character::apply_damage(int amount) {
	HP -= amount;
	if (HP <= 0) {
		HP = 0;
		this->die();
	}
}
void Character::heal(int amount) {
	HP += amount;
	if (HP > maxHP)
		HP = maxHP;
}
void Character::die() {
	HP = 0;
}