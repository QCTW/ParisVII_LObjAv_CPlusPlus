/*
 * Centaurien.h
 *
 *  Created on: 12 nov. 2015
 *      Author: Quincy
 */

#ifndef CENTAURIEN_H_
#define CENTAURIEN_H_
#include <iostream>
#include <string>

using namespace std;

class Centaurien
{
private:
	static int nNumerote;
	const string sNom;
	int nAge, nId;

public:
	virtual string getSexe()=0;
	string getNom();
	int getAge();
	int getId();
	Centaurien(string nom);
	virtual ~Centaurien();
};

#endif /* CENTAURIEN_H_ */
