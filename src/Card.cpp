/*
 * Card.cpp
 *
 *  Created on: 01.11.2016
 *      Author: ASKOCZYL
 */

#include "Card.h"

suite Card::getSuite() const {
	return s;
}

Pips& Card::getPips() {
	return v;
}

Card::~Card() {
	// TODO Auto-generated destructor stub
}

