/*
 * Truc.cpp
 *
 *  Created on: 12 nov. 2015
 *      Author: Quincy
 */

#include "Truc.h"

Truc::Truc(string sNom):Centaurien(sNom)
{
}

string Truc::getSexe()
{
	return typeid(this).name();
}


Truc::~Truc()
{
}

