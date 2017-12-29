/*
 * CelluleChainee.h
 *
 *  Created on: 15 oct. 2015
 *      Author: Quincy
 */

#ifndef CELLULECHAINEE_HPP_
#define CELLULECHAINEE_HPP_

class CelluleChainee
{
	public:
		CelluleChainee(int iVal);
		CelluleChainee* getNextCell();
		int getCellValue();
		void setNextCellule(CelluleChainee* ccNext);
		virtual ~CelluleChainee();

	private:
		int nCellValue;
		CelluleChainee* ptrNextCell;
};

#endif /* CELLULECHAINEE_HPP_ */
