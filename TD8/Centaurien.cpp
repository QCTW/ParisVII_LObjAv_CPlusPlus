/*
 * Centaurien.cpp
 *
 *  Created on: 12 nov. 2015
 *      Author: Quincy
 */

#include "Centaurien.h"
int Centaurien::nNumerote=0;

Centaurien::Centaurien(string nom):sNom(nom),nAge(0)
{
	nNumerote++;
	nId = nNumerote;
}

int Centaurien::getAge()
{
	return nAge++;
}

int Centaurien::getId()
{
	nAge++;
	return nId;
}

string Centaurien::getNom()
{
	nAge++;
	return sNom;
}

Centaurien::~Centaurien()
{
}

