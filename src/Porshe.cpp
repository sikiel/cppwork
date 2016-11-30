/*
 * Porshe.cpp
 *
 *  Created on: 01.08.2016
 *      Author: ASKOCZYL
 */

#include "Car.h"
using namespace std;

class Porshe : public Car {
public:
	Porshe(){
		cout << "I'm Porshe" << endl;
	}
	~Porshe(){
		cout << "deleting Porshe" << endl;
	}
	void drive(){
		cout << "driving Porshe" << endl;
	}
};

