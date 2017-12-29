/*
 * Billet.hpp
 *
 *  Created on: 10 déc. 2015
 *      Author: Quincy
 */

#ifndef TD12_BILLET_HPP_
#define TD12_BILLET_HPP_

#include "Monaie.hpp"

enum VAL : int { CINQ=5, DIX=10, VINGT=20, CINQUANTE=50};
class Billet: public Monaie
{
public:
	Billet();
	virtual ~Billet();
};

#endif /* TD12_BILLET_HPP_ */
