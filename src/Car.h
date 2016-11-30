/*
 * Car.h
 *
 *  Created on: 01.08.2016
 *      Author: ASKOCZYL
 */

#ifndef CAR_H_
#define CAR_H_
#include <iostream>
using namespace std;

class Car {
public:
	Car(){
		cout << "I'm a car" << endl;
	}
	virtual ~Car(){
		cout << "deleting car" << endl;
	};
	virtual void drive(){
		cout << "driving car" << endl;
	};

};


#endif /* CAR_H_ */
