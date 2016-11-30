/*
 * duo.h
 *
 *  Created on: 06.11.2016
 *      Author: ASKOCZYL
 */

#ifndef DUO_H_
#define DUO_H_

class duo {
public:
	duo():first(0.0), second(0.0){};
	duo(double f, double s): first(f), second(s){};
	virtual ~duo();
	double getFirst() const;
	void setFirst(double first);
	double getSecond() const;
	void setSecond(double second);

protected:
	double first, second;
//	virtual double length() = 0;
};

#endif /* DUO_H_ */
