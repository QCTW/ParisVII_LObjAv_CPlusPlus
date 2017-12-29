/*
 * Piece.hpp
 *
 *  Created on: 10 déc. 2015
 *      Author: Quincy
 */

#ifndef TD12_PIECE_HPP_
#define TD12_PIECE_HPP_

#include "Monaie.hpp"

enum VAL : int { UN=1, DEUX=2, PCINQ=0.5, PUN=0.1, PDEUX=0.2 };
class Piece: public Monaie
{
public:
	Piece();
	virtual ~Piece();
};

#endif /* TD12_PIECE_HPP_ */
