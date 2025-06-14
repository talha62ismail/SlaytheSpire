#include "player.h"

extern int hand_size;

Player::Player(String n, int hp, int g, Card* h) {
	name = n;
	HP = hp;
	maxHP = hp;
	gold = g;
	block = 0;
	for (int i = 0;i < hand_size;i++) {
		hand.push(h[i]);
	}
	deck = nullptr;
}
void Player::draw_card() {
	int index;
	random_device rd;
	uniform_int_distribution<int> dist(1, 30);
	index = dist(rd);
	Card newcard = deck[index];
	hand.push(newcard);
}
void Player::play_card(int index) {

}
void Player::gain_block(int amount) {

}
void Player::use_potion(int index) {
}
void Player::apply_relic(int index) {

}
void Player::add_item(Item item) {

}