/*
 * Dealer.h
 *
 *  Created on: 01.11.2016
 *      Author: ASKOCZYL
 */

#ifndef DEALER_H_
#define DEALER_H_
#include <vector>
#include "Card.h"

using namespace std;

class Dealer {
public:
	Dealer();
	virtual ~Dealer();
	void initDeck(vector<Card>& deck);
};

#endif /* DEALER_H_ */
