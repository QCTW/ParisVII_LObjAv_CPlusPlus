// -*- coding: utf-8 -*-
// Time-stamp: <diamond.cpp   9 nov 2015 21:38:16>

// The diamond

#include <iostream>
using namespace std;

// Base class
class B
{
public:
	string fun()
	{
		return "fun in B";
	}
private:
	int b;
};

// Derived class
class C0: public B
{
private:
	int c0;
};

// Derived class
class C1: public B
{
private:
	int c1;
};

// Virtual derived class
class D0: public virtual B
{
private:
	int d0;
};

// Virtual derived class
class D1: public virtual B
{
private:
	int d1;
};

// Derived class: inherits from C0 and C1
// Two copies of the base class B
class E: public C0, public C1
{
};

// Derived class: inherits from C0 and D1
// Two copies of the base class B
class F: public C0, public D1
{
};

// Derived class: inherits from C0 and C1
// One copy of the base class B
class G: public D0, public D1
{
};

int main()
{
	E e;
	// Ambiguous call
	// cout << e.fun() << endl;

	E f;
	// Ambiguous call
	// cout << f.fun() << endl;

	G g;
	// Unambiguous call
	cout << g.fun() << endl;
}
