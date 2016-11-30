/*
 * Card.h
 *
 *  Created on: 01.11.2016
 *      Author: ASKOCZYL
 */

#ifndef CARD_H_
#define CARD_H_
#include "Pips.h"

using namespace std;

class Card {
private:
	suite s;
	Pips v;

public:
	Card():s(suite::SPADE),v(1){};
	Card(suite s, Pips v):s(s),v(v){};
//	friend ostream& operator<<(ostream& out, const Card& c);
	virtual ~Card();
	suite getSuite() const;
	Pips& getPips();
};

//ostream& operator<<(ostream& out, const Card& c){
//	out << c.v << "\n";
//	return out;
//
//};

#endif /* CARD_H_ */
