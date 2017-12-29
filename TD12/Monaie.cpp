/*
 * Monaie.cpp
 *
 *  Created on: 10 déc. 2015
 *      Author: Quincy
 */

#include "Monaie.hpp"

Monaie::Monaie(Banque* bSource)
{
	nID = bSource->getUniqueSerialNumber();
}

Monaie::~Monaie()
{
}

