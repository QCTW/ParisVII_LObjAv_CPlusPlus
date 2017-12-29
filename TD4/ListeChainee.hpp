/*
 * ListeChainee.h
 *
 *  Created on: 15 oct. 2015
 *      Author: Quincy
 */

#ifndef LISTECHAINEE_HPP_
#define LISTECHAINEE_HPP_
#include "CelluleChainee.hpp"

class ListeChainee
{
	public:
		ListeChainee(CelluleChainee* oneCell);
		void printList();
		virtual ~ListeChainee();

	private:
		CelluleChainee* ccFirstPtr;
};

#endif /* LISTECHAINEE_HPP_ */
