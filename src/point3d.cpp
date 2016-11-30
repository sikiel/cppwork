/*
 * point3d.cpp
 *
 *  Created on: 06.11.2016
 *      Author: ASKOCZYL
 */

#include "point3d.h"

#include <cmath>

double point3d::length() {
	cout<< "point3d length";
	return sqrt(first*first+second*second+third*third);
}

point3d::~point3d() {
	// TODO Auto-generated destructor stub
}

