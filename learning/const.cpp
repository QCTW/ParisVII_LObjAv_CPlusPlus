// -*- coding: utf-8 -*-
// Time-stamp: <constants.cpp  31 oct 2015 14:42:24>

// Constantes : utilisation de const
// + pour une variable locale de fonction/mÃ©thode
// + pour un paramÃ¨tre d'une fonction/mÃ©thode
// + pour une mÃ©thode pour qualifier *this
// + pour un attribut d'une classe
// + pour l'emplacement rÃ©fÃ©rencÃ© par un pointeur

#include <iostream>
#include <string>
using namespace std;

class A
{
private:
	static const int cst1;	// Attribut statique constant
	const int cst2;		// Attribut non statique constant
	int val;			// Attribut variable
public:
	// Constructor initializing cst2 and val
	A(int n) :
			cst2(n), val(n)
	{
	}
	// Non-const access operator to val
	int& access()
	{
		return val;
	}
	// Return value of val
	// Const is necessary to call this method on a const object
	int value() const
	{
		return val;
	}
};

// Initialization of the static const attribute cst1
const int A::cst1 = 1;

int main()
{
	// Variables
	const int c = 5;		// Constant variable
	const int d = 7;		// Constant variable
	int v = 0;			// Non-constant variable
	cout << "c=" << c << " v=" << v << endl; // c=5 v=0
	v = 1;
	// Assignment impossible
	// c = 0
	cout << "c=" << c << " v=" << v << endl; // c=5 v=1
	// Assignment
	v = c;
	cout << "c=" << c << " v=" << v << endl; // c=5 v=5

	// Objets
	const A a = 9;			 // Const object
	cout << "a.val=" << a.value() << endl; // a.val=9
	// Appel impossible de access
	// int& p = a.access();

	// Usual pointer
	int* p;
	// Pointer to a const object
	const int* cp = &c;		 // Initialisation
	cout << "*cp=" << *cp << endl; // *cp=5
	// Assignment impossible to *cp
	// *cp = 2;
	// Assignment to cp
	cp = &d;
	cout << "*cp=" << *cp << endl; // *cp=7
	// Conversion
	cp = &v;
	// Assignment impossible to *cp
	*cp = 2;
	// Assignment impossible since types mismatch
	// p = &c;

	// Constant pointer
	int* const pc = &v;
	cout << "*pc=" << *pc << endl; // *pc=5
	// Assignment to *pc
	*pc = 2;
	cout << "*pc=" << *pc << " v=" << v << endl; // *pc=2 v=2
	// Assignment impossible to pc
	// pc = &d;
}
