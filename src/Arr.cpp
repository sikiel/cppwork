/*
 * Arr.cpp
 *
 *  Created on: 15.08.2016
 *      Author: ASKOCZYL
 */

#include "Arr.h"
#include <stddef.h>

Arr::Arr(Arr& a) :
		ar(NULL), size_(a.size()) {

	ar = new int[size_];
	for (int i = 0; i < size_; i++)
		ar[i] = a[i];

}
;
Arr& Arr::operator=(Arr& a) {
	int* tmp = new int[a.size()];
	for (int i = 0; i < a.size(); i++)
			tmp[i] = a[i];
	delete[] ar;
	ar = tmp;
	size_ = a.size();
	return *this;
};

int Arr::size() {
	return size_;
};
int Arr::operator[](int i){
	return ar[i];
};

Arr::~Arr() {
delete ar;

}

