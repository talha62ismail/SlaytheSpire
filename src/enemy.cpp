#include "enemy.h"

Enemy::Enemy(String n, int hp, String t, int a) {
	name = n;
	HP = hp;
	maxHP = hp;
	type = t;
	attack = a;
}
void Enemy::die() {
	HP = 0;
}
void Enemy::apply_damage(int amount) {
	HP -= amount;
	if (HP <= 0) {
		HP = 0;
		this->die();
	}
}