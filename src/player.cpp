#include "player.h"

extern int hand_size;
extern Card* deck;

Player::Player(String n, int hp, int g, MyVector<Card> d) {
	name = n;
	HP = hp;
	maxHP = hp;
	gold = g;
	block = 0;
	energy = 3;
	deck = d;
	int index;
	for (int i = 0;i < hand_size;i++) {
		random_device rd;
		uniform_int_distribution<int> dist(0, 29);
		index = dist(rd);
		Card newcard = deck[index];
		hand.push(newcard);
	}
}
void Player::draw_card() {
	int index;
	random_device rd;
	uniform_int_distribution<int> dist(0, 29);
	index = dist(rd);
	Card newcard = deck[index];
	hand[0] = newcard;
}
void Player::shuffle_hand() {
	int index;
	for (int i = 0;i < hand_size;i++) {
		random_device rd;
		uniform_int_distribution<int> dist(0, 29);
		index = dist(rd);
		Card newcard = deck[index];
		hand[i] = newcard;
	}
}
void Player::play_card(int index) {

}
void Player::gain_block(int amount) {
	block += amount;
}
void Player::use_potion(int index) {
}
void Player::apply_relic(int index) {

}
void Player::add_item(Item item) {

}
int Player::getblock() {
	return block;
}
void Player::apply_damage(int amount) {
	if (block < amount)
		HP -= (amount - block);
	block -= amount;
	if (block < 0)
		block = 0;
}