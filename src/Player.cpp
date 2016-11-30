/*
 * Player.cpp
 *
 *  Created on: 01.11.2016
 *      Author: ASKOCZYL
 */

#include "Player.h"
#include <iostream>
#include <algorithm>


Player::Player() {
	// TODO Auto-generated constructor stub

}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

void Player::printCards(vector<Card> cards) {
	for (auto card : cards) {
//		cout << card << "\n";
	}
}

bool Player::isFlush(vector<Card> hand) {
	suite s = hand[0].getSuite();
	for (auto card : hand) {
		if (card.getSuite() != s)
			return false;
	}
	return true;
}

bool Player::isStraight(vector<Card>& hand) {
	int pips_v[5] = {};
	int i = 0;
	for (auto p = hand.begin(); p != hand.end(); ++p){
		pips_v[i++] = (p->getPips()).get_pips();
//		cout << pips_v[i-1];
	}
	sort(pips_v, pips_v + 5);
	if (pips_v[0] != 1)
		return (pips_v[0] == pips_v[1] - 1 && pips_v[1] == pips_v[2] - 1)
				&& (pips_v[2] == pips_v[3] - 1 && pips_v[3] == pips_v[4] - 1);
	else
		return ((pips_v[0] == pips_v[1] - 1 && pips_v[1] == pips_v[2] - 1)
				&& (pips_v[2] == pips_v[3] - 1 && pips_v[3] == pips_v[4] - 1))
				|| ((pips_v[1] == 10) && (pips_v[2] == 11) && (pips_v[3] == 12)
						&& (pips_v[4] == 13));

}

bool Player::isFlushAndStraight(vector<Card> hand) {
	return isStraight(hand) && isFlush(hand);
}
