// -*- coding: utf-8 -*-
// Time-stamp: <alloc.cpp   6 oct 2015 15:35:30>
// Dynamical allocation
#include <iostream>
using namespace std;

// Class with a single integer field
class A
{
public:
	// Constructor
	explicit A(int a = 0) : a(a)
	{
	}
	// Conversion to int
	operator int() const
	{
		return a;
	}
private:
	int a;			// Int field
};

// Class containing a pointer to an object of class A
class B
{
public:
	// Constructor
	explicit B(A* a = nullptr) : a(a)
	{
	}
	// Conversion to int: use conversion to int of the object pointed by a
	operator int() const
	{
		return *a;
	}
private:
	A* a;				// Pointer
};

// Class containing a reference to an object of class A
class C
{
public:
	// Constructor
	// The reference must be initialized in the initialization list.
	explicit C(A& a) : a(a)
	{
	}
	// Conversion to int: use conversion to int of the object referenced by a
	operator int() const
	{
		return a;
	}
private:
	A& a;				// Reference
};

// Allocate one object of class A
A* allocone(int n)
{
	return new A(n);
}

// Allocate an array of objects of class A
A* allocmany(int n)
{
	return new A[n];
}

int main()
{
	// Allocate first int
	int* ip = new int();
	cout << *ip << endl;
	delete ip;
	// Allocate second int
	ip = new int(1);
	cout << *ip << endl;
	delete ip;
	// Allocate int array
	ip = new int[10];
	for (int i = 0; i < 10; ++i)
		cout << ip[i] << ' ';
	cout << endl;
	delete[] ip;

	// Allocate one object of class A
	A* ap = new A(2);
	cout << *ap << endl;
	delete ap;
	// Allocate an array of A
	ap = new A[10];
	for (int i = 0; i < 10; ++i)
		cout << ap[i] << ' ';
	cout << endl;
	delete[] ap;
	// Get one allocated A
	ap = allocone(3);
	cout << *ap << endl;
	delete ap;
	// Get allocated array of A
	ap = allocmany(10);
	for (int i = 0; i < 10; ++i)
		cout << ap[i] << ' ';
	cout << endl;
	delete[] ap;

	// Objects on the stack
	A as(6);			// Object of class A on the stack
	B bs(&as);			// Object of class B pointing to a
	C cs(as);			// Object of class C referencing a
	cout << as << ' ' << bs << ' ' << cs << endl;

	// Object on the heap
	ap = new A(7);
	B* bp = new B(ap);
	C* cp = new C(*ap);
	cout << *ap << ' ' << *bp << ' ' << *cp << endl;

	// Object on the stack referencing object on the heap
	B bsh(ap);
	C csh(*ap);
	cout << bsh << ' ' << csh << endl;

	// Object with pointer or reference to nothing (address 0)
	B* bz = new B();
	C* cz = new C(*(static_cast<A*>(nullptr)));
	// Segmentation fault : bz or cz assess address 0
	// cout << *bz << ' ' << *cz << endl;
}
