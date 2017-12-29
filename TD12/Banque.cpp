/*
 * Banque.cpp
 *
 *  Created on: 10 déc. 2015
 *      Author: Quincy
 */

#include "Banque.hpp"

Banque* Banque::bUnique = nullptr;
Banque::Banque()
{

}

Banque::~Banque()
{
}

Banque* Banque::getInstance()
{
	if(bUnique==nullptr)
		bUnique = new Banque();

	return bUnique;
}

std::list<Monaie> Banque::createMoney(int nAmount)
{

}

int Banque::getUniqueSerialNumber()
{
	nSerialNumber = nSerialNumber++;
	return nSerialNumber;
}
