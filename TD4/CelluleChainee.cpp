/*
 * CelluleChainee.cpp
 *
 *  Created on: 15 oct. 2015
 *      Author: Quincy
 */

#include "CelluleChainee.hpp"

CelluleChainee::CelluleChainee(int iVal)
{
	nCellValue = iVal;
	ptrNextCell = nullptr;
}

void CelluleChainee::setNextCellule(CelluleChainee* nextCell)
{
	ptrNextCell = nextCell;
}

CelluleChainee* CelluleChainee::getNextCell()
{
	return ptrNextCell;
}

int CelluleChainee::getCellValue()
{
	return nCellValue;
}

CelluleChainee::~CelluleChainee()
{
	// TODO Auto-generated destructor stub
}

