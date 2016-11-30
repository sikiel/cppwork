/*
 * Arr.h
 *
 *  Created on: 15.08.2016
 *      Author: ASKOCZYL
 */

#ifndef ARR_H_
#define ARR_H_

class Arr {
private:
	int* ar;
	int size_;

public:
	Arr(int* a, int s) :
			ar(a), size_(s) {
	}
	;
	Arr( Arr& a);
	Arr& operator=(Arr& a);
	int operator[](int i);
	virtual ~Arr();

	int size();

};

#endif /* ARR_H_ */
