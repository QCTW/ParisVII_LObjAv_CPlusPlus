/*
 * Fraction.cpp
 *
 *  Created on: 19 nov. 2015
 *      Author: Quincy
 */

#include "Fraction.h"

Fraction::Fraction(int x, int y)
{
	this->x = x;
	this->y = y;

}

Fraction::~Fraction()
{
}

int main(void)
{
	Fraction f1(10,25);
	cout << f << endl;
	Fraction f2(10,25);
	Fraction f3 = f1 + f2;
}
