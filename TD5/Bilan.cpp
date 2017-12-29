/*
 * Bilan.cpp
 *
 *  Created on: 22 oct. 2015
 *      Author: Quincy
 */
#include "Bilan.hpp"

#include <iostream>
using namespace std;

Bilan::Bilan()
{
	cout << "Bilan constructor called" << endl;
}

Bilan::~Bilan()
{
	cout << "Bilan deconstructor called" << endl;
}

ostream& operator<<(ostream& o, Bilan &x)
{
	o << '(' << x.nom << ',' << x.score << ')';
	return o;
}
