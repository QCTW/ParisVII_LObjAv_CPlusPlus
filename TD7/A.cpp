
/*
 * A.cpp
 *
 *  Created on: 5 nov. 2015
 *      Author: Quincy
 */

#include "A.hpp"

using namespace std;

A::A()
{
}

A::~A()
{
	// TODO Auto-generated destructor stub
}

void f(int* const X, const int* Y)
{
	*X = 0;
	//X++; //invalid

	Y++;
	//*Y = 0; //invalid

}

int main(void)
{
	int* a = new int(1);
	int* b = new int(11);
	f(a, b);
}
