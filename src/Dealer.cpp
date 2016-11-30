/*
 * Dealer.cpp
 *
 *  Created on: 01.11.2016
 *      Author: ASKOCZYL
 */

#include "Dealer.h"


Dealer::Dealer() {
	// TODO Auto-generated constructor stub

}

Dealer::~Dealer() {
	// TODO Auto-generated destructor stub
}

void Dealer::initDeck(vector<Card>& deck) {
	for (int i = 1; i < 14; i++) {
		Card c(suite::SPADE, i);
		deck[i - 1] = c;
		Card d(suite::HEART, i);
		deck[i + 12] = d;
		Card e(suite::DIAMOND, i);
		deck[i + 25] = e;
		Card f(suite::CLUB, i);
		deck[i + 38] = f;
	}
}
