/*
 * Player.h
 *
 *  Created on: 01.11.2016
 *      Author: ASKOCZYL
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include <vector>
#include "Card.h"
#include "Pips.h"

using namespace std;


class Player {

public:
	Player();
	virtual ~Player();
	void printCards(vector<Card> cards);
	bool isFlush(vector<Card> hand);
	bool isStraight(vector<Card>& hand);

	bool isFlushAndStraight(vector<Card> hand);
};

#endif /* PLAYER_H_ */
