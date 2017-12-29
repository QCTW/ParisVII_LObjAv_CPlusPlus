/*
 * Bilan.h
 *
 *  Created on: 22 oct. 2015
 *      Author: Quincy
 */

#ifndef BILAN_HPP_
#define BILAN_HPP_
#include <string>
using namespace std;

class Bilan
{
public:
	Bilan();
	virtual ~Bilan();
	string nom;
	string score;
	friend ostream& operator<<(ostream&, Bilan &);
};

#endif /* BILAN_HPP_ */
