/*
 * point3d.h
 *
 *  Created on: 06.11.2016
 *      Author: ASKOCZYL
 */

#ifndef POINT3D_H_
#define POINT3D_H_
#include "point.h"
class point3d : public point{
public:
	point3d():point(), third(0.0){};
	point3d(double a, double b, double c) : point(a,b), third(c){};
	double length();
	virtual ~point3d();
private:
	double third;
};

#endif /* POINT3D_H_ */
