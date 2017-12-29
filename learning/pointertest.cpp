// -*- coding: utf-8 -*-
// Time-stamp: <pointertest.cpp   9 nov 2015 21:36:20>

#include <iostream>
#include <string>
using namespace std;

// Base class 0
class B0 {
public:
  int b;
};

// Base class 1
class B1 {
public:
  int b;
};

// Derived class: inherits from B0 and B1
class D : public B0, public B1
{
public:
  int d;
};


int main() {
  D* d = new D();		// D object
  B0* b0 = d;			// referenced through a B0* pointer
  B1* b1 = d;			// referenced through a B1* pointer

  cout << "d: " << d << endl; //D
  cout << "b0: " << b0 << endl; //B0
  cout << "b1: " << b1 << endl; //B1

  cout << (d == b0) << endl;	// True
  cout << (d == b1) << endl;	// True

  void* dd  = static_cast<void*>(d);
  void* bb0 = static_cast<void*>(b0);
  void* bb1 = static_cast<void*>(b1);

  cout << (dd == bb0) << " " << bb0 << endl;	// True
  cout << (dd == bb1) << " " << bb1 << endl;	// False
}
