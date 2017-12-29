/*
 * Monaie.hpp
 *
 *  Created on: 10 déc. 2015
 *      Author: Quincy
 */

#ifndef TD12_MONAIE_HPP_
#define TD12_MONAIE_HPP_

class Monaie
{
	friend Banque;

private:
	int nID;
	Monaie(Banque* bSource);
	virtual ~Monaie();
};

#endif /* TD12_MONAIE_HPP_ */
