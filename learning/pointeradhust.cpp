// -*- coding: utf-8 -*-
// Time-stamp: <pointeradhust.cpp   9 nov 2015 21:02:23>

// Pointer adjustment

#include <iostream>
#include <string>
using namespace std;


// Base class 0
class B0 {
public:
  void whoiam() { cout << "In B0: " << this << endl; really(); }
  virtual void really() { cout << "In B0: " << this << endl; }
};

// Base class 1
class B1 {
public:
  void whoiam() { cout << "In B1: " << this << endl; really(); }
  virtual void really() { cout << "In B1: " << this << endl; }
};

// Derived class: inherits from B0 and B1
class D : public B0, public B1
{
public:
  int d;
  virtual void really() { cout << "In D: " << this << endl; }
};


int main() {
  // Object of type B0
  // The typical output is:
  // b0: n
  // In B0: n
  // In B0: n
  B0 b0;
  cout << "b0: " << &b0 << endl;
  b0.whoiam();

  // Object of type B1
  // The typical output is:
  // b1: n
  // In B1: n
  // In B1: n
  B1 b1;
  cout << "b1: " << &b1 << endl;
  b1.whoiam();

  // Object of type D
  // The typical output is:
  // d: n
  // In B0: n
  // In D: n
  // In B1: n+8
  // In D: n
  // Note that B1::whoiam receives this equal to n+8
  // but calls D::really with this equal to n (and not n+8)
  D d;
  cout << "d: " << &d << endl;
  d.B0::whoiam();
  d.B1::whoiam();

}
