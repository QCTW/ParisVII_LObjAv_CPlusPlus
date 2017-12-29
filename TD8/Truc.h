/*
 * Truc.h
 *
 *  Created on: 12 nov. 2015
 *      Author: Quincy
 */

#ifndef TRUC_H_
#define TRUC_H_

#include "Centaurien.h"

class Truc: public Centaurien {
public:
	string getSexe();
	Truc(string sNom);
	virtual ~Truc();
};

#endif /* TRUC_H_ */
