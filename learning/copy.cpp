// -*- coding: utf-8 -*-
// Time-stamp: <copy.cpp   1 dÃ©c 2015 08:09:30>

// Inheritance and copy constructors

#include <iostream>
#include <string>
using namespace std;

// Class used as field
class A
{
public:
	// Constructors
	A() :
			v(0)
	{
		cout << "A()" << endl;
	}
	A(int n) :
			v(n)
	{
		cout << "A(" << n << ")" << endl;
	}
	// Copy constructor
	A(A& a) :
			v(a.v)
	{
		cout << "A(A&)" << endl;
	}
	// Copy assignment
	A& operator=(A& a)
	{
		v = a.v;
		cout << "A::operator=" << endl;
		return *this;
	}
private:
	int v;			// Field
};

// Class used as base class
class B
{
public:
	// Constructors
	B() :
			v(0)
	{
		cout << "B()" << endl;
	}
	B(int n) :
			v(n)
	{
		cout << "B(" << n << ")" << endl;
	}
	// Copy constructor
	B(B& b) :
			v(b.v)
	{
		cout << "B(B&)" << endl;
	}
	// Copy assignment
	B& operator=(B& b)
	{
		v = b.v;
		cout << "B::operator=" << endl;
		return *this;
	}
private:
	int v;			// Field
};

// Class with NO defined copy constructor and copy assignment
class C0: public B
{
public:
	// Constructors
	C0()
	{
		cout << "C0()" << endl;
	}
	C0(int n) :
			B(n), a(n)
	{
		cout << "C1(" << n << ")" << endl;
	}
	// Copy constructor et opÃ©rateur d'affectation
	// The compiler generates automatically a copy constructor and
	// a copy assignment operator C0::operator=.
	// The copy constructor, in this order, the constructors
	// Le constructeur de copie appelle, dans cet ordre, B(B&) et A(A&).
	// The copy assignment calls, in this order the copy assignments
	// B::operator=(B&) and A::operator=(A&).
private:
	A a;				// Field
};

// Class with copy constructor and copy assignment WRONGLY defined
class C1: public B
{
public:
	// Constructors
	C1()
	{
		cout << "C1()" << endl;
	}
	C1(int n) :
			B(n), a(n)
	{
		cout << "C1(" << n << ")" << endl;
	}
	// Copy constructor
	// This copy constructor is wrongly defined because it does not call
	// explicitly neither the copy constructor of the base class nor
	// the copy constructor of the field a.
	C1(C1& c)
	{
		cout << "C1(C1&)" << endl;
	}
	// Copy assignment
	// This copy assignment is wrongly defined because it does not call
	// explicitly neither the copy assignment of the base class nor
	// the copy assignment of the field a.
	C1& operator=(C1& c)
	{
		cout << "C1::operator=" << endl;
		return *this;
	}
private:
	A a;				// Field
};

// Class with defined copy constructor and copy assignment
class C2: public B
{
public:
	// Constructors
	C2()
	{
		cout << "C2()" << endl;
	}
	C2(int n) :
			B(n), a(n)
	{
		cout << "C2(" << n << ")" << endl;
	}
	// Copy constructor
	// The copy constructor must explicitly call the copy constructors
	// of the base class and of the field a.
	C2(C2& c) :
			B(c), a(c.a)
	{
		cout << "C2(C2&)" << endl;
	}
	// Copy assignment
	// The copy assignment must explicitly call the copy assignments
	// of the base class and of the field a.
	C2& operator=(C2& c)
	{
		// Copy assignment of the base class
		// The following way is bad since it makes a recursive call
		// *this = c;
		// Call of the copy assignment B::operator=(B&)
		B::operator=(c);
		// Copy of the field
		a = c.a;
		cout << "C2::operator=" << endl;
		return *this;
	}
private:
	A a;				// Field
};

// Main program
int main()
{
	// Use of class C0
	C0 c00; 			// Default constructor C0()
	C0 c01(1);			// Constructor C0(int)
	C0 c02(c01);			// Copy constructor C0(C0&)
	C0 c03;			// Default constructor C0()
	c03 = c02;			// Copy assignment C0::operator=(C0&)
	// Use of class C1
	C1 c10;                       // Default constructor C1()
	C1 c11(2);			// Constructor C1(int)
	C1 c12(c11);			// Copy constructor C1(C1&)
	C1 c13;			// Default constructor C1()
	c13 = c12;			// Copy assignment C1::operator=(C1&)
	// Use of class C2
	C2 c20;                       // Default constructor C2()
	C2 c21(3);			// Constructor C2(int)
	C2 c22(c21);			// Copy constructor C2(C2&)
	C2 c23;			// Default constructor C2()
	c23 = c22;			// Copy assignment C2::operator=(C2&)
}
