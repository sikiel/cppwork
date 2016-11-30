/*
 * Pips.h
 *
 *  Created on: 01.11.2016
 *      Author: ASKOCZYL
 */

#ifndef PIPS_H_
#define PIPS_H_
#include <assert.h>
#include <fstream>

using namespace std;


enum class suite:short{SPADE, HEART, DIAMOND, CLUB};

class Pips {
public:
	Pips(int v): v(v){assert(v>0 && v<14);};
	virtual ~Pips();
	int get_pips();
//	friend ostream& operator<<(ostream& out, const Pips& p);

private:
	int v;
};

//ostream& operator<<(ostream& out, const Pips& p){
//	out << p.v<< "\n";
//	return out;
//
//};

#endif /* PIPS_H_ */
