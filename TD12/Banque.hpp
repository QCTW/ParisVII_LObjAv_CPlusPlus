/*
 * Banque.hpp
 *
 *  Created on: 10 déc. 2015
 *      Author: Quincy
 */

#ifndef TD12_BANQUE_HPP_
#define TD12_BANQUE_HPP_

#include <list>

/**
 * Design pattern Singleton:
 * - Constructor in private
 * - Constructor of copy() is private
 *
 */
class Banque
{
private:
	static Banque* bUnique;
	static int nSerialNumber = 0;
	Banque();
	virtual ~Banque();
	Banque( Banque &banqueToCopy ); //constructor of copy

protected:
	int getUniqueSerialNumber();

public:
	static Banque* getInstance();
	std::list<Monaie> createMoney(int nAmount);
};

#endif /* TD12_BANQUE_HPP_ */
