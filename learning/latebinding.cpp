// -*- coding: utf-8 -*-
// Time-stamp: <latebind.cpp  20 oct 2015 09:10:11>

// Late binding aka dynamic binding
// Virtual/non virtual methods

#include <iostream>
#include <string>
using namespace std;

class B
{
public:
	// Non virtual method
	string f()
	{
		return "f in B";
	}
	// Virtual method
	virtual string g()
	{
		return "g in B";
	}
};

class D: public B
{
public:
	// Redefinition of the non virtual method
	string f()
	{
		return "f in D";
	}
	// Redefinition of the virtual method
	virtual string g()
	{
		return "g in D";
	}
};

int main()
{
	B b;
	D d;
	B* bp = new B();
	B* cp = new D();
	D* dp = new D();
	B& br = *new B();
	B& cr = *new D();
	D& dr = *new D();

	// Variables
	cout << b.f() << endl;	// f in B
	cout << b.g() << endl;	// g in B
	cout << d.f() << endl;	// f in D
	cout << d.g() << endl;	// g in D

	// Pointers
	cout << bp->f() << endl;	// f in B
	cout << bp->g() << endl;	// g in B
	cout << cp->f() << endl;	// f in B
	cout << cp->g() << endl;	// g in D
	cout << dp->f() << endl;	// f in D
	cout << dp->g() << endl;	// g in D

	// References
	cout << br.f() << endl;	// f in B
	cout << br.g() << endl;	// g in B
	cout << cr.f() << endl;	// f in B
	cout << cr.g() << endl;	// g in D
	cout << dr.f() << endl;	// f in D
	cout << dr.g() << endl;	// g in D
}
