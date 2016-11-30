/*
 * point.cpp
 *
 *  Created on: 06.11.2016
 *      Author: ASKOCZYL
 */

#include "point.h"

#include <cmath>

point::~point() {
	// TODO Auto-generated destructor stub
}

double point::length() {
	cout << "point length ";
	return sqrt(first*first+second*second);
}
