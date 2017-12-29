/*
 * ListeChainee.cpp
 *
 *  Created on: 15 oct. 2015
 *      Author: Quincy
 */
#include "ListeChainee.hpp"

#include <string>
#include <iostream>
using namespace std;

ListeChainee::ListeChainee(CelluleChainee* oneCell)
{
	this->ccFirstPtr = oneCell;
}

void ListeChainee::printList()
{
	cout << getValueFromTheList(ccFirstPtr) << endl;
}

string getValueFromTheList(CelluleChainee* ccFirstPtr)
{
	string sVal = "";
	while(ccFirstPtr->getNextCell()!=nullptr)
	{
		int nVal = ccFirstPtr->getCellValue();
		sVal.append(std::to_string(nVal));
		string sNextVal = getValueFromTheList(ccFirstPtr->getNextCell());
		if(sNextVal.length()>0)
		{
			sVal.append(".");
			sVal.append(sNextVal);
		}
	}
	return sVal;
}

ListeChainee::~ListeChainee()
{
	// TODO Auto-generated destructor stub
}

