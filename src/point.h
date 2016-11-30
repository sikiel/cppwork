/*
 * point.h
 *
 *  Created on: 06.11.2016
 *      Author: ASKOCZYL
 */

#ifndef POINT_H_
#define POINT_H_

#include <iostream>
#include "duo.h"

using namespace std;
class point : public duo{
public:
	point(): duo(){
	};
	point(double a, double b) :duo(a,b){
		cout << "calling const\n";
	}
	virtual ~point();
	virtual double length();
};

#endif /* POINT_H_ */
