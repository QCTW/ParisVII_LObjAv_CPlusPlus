// -*- coding: utf-8 -*-
// Time-stamp: <layout.cpp  12 nov 2015 11:52:18>

// Show layout in memory of class fields and vptr

#include <iostream>
#include <string>
using namespace std;

// Base class
class B
{
public:
	virtual int get() const
	{
		return b;
	}
	int b = 0;
};

// Virtual derived class
class D0: public B
{
public:
	int d0 = 1;
};

// Virtual derived class
class D1: public virtual B
{
public:
	int d1 = 2;
};

// Virtual derived class
class D2: public virtual B
{
public:
	int d2 = 3;
};

// Derived class with two base classes
class C: public D1, public D2
{
public:
	int c = 4;
};

int main()
{
	B b;
	cout << "// Instance of base class B" << endl;
	cout << "B*:  " << &b << endl;
	cout << "d.b: " << &b.b << endl;
	cout << endl;

	D0 d0;
	D0* pdd0 = &d0;
	B* pbd0 = &d0;
	cout << "// Instance of derived class D0" << endl;
	cout << "D0*:   " << pdd0 << endl;
	cout << "B*:    " << pbd0 << endl;
	cout << "d0.b:  " << &d0.b << endl;
	cout << "d0.d0: " << &d0.d0 << endl;
	cout << endl;

	D1 d1;
	D1* pdd1 = &d1;
	B* pbd1 = &d1;
	cout << "// Instance of virtual derived class D1" << endl;
	cout << "D1*:   " << pdd1 << endl;
	cout << "d1.d1: " << &d1.d1 << endl;
	cout << "B*:    " << pbd1 << endl;
	cout << "d1.b:  " << &d1.b << endl;
	cout << endl;

	C c;
	C* pcc = &c;
	D1* pd1c = &c;
	D2* pd2c = &c;
	B* pbc = &c;
	cout << "// Instance of multiple derived class C" << endl;
	cout << "C*:   " << pcc << endl;
	cout << "D1*:  " << pd1c << endl;
	cout << "c.d1: " << &c.d1 << endl;
	cout << "D2*:  " << pd2c << endl;
	cout << "c.d2: " << &c.d2 << endl;
	cout << "c.c:  " << &c.c << endl;
	cout << "B*:   " << pbc << endl;
	cout << "c.b:  " << &c.b << endl;
}
