// -*- coding: utf-8 -*-
// Time-stamp: <exoref.cpp  22 oct 2015 10:39:01>
#include <iostream>
using namespace std;

// Class with a single field but many methods to access it
class A {
public:
  A(int n) : a(n) {}		// Constructor
  int  val() { return a; }	// Return value of field
  int* ptr() { return &a; }	// Return address of the field
  int& ref() { return a; }	// Return reference to the field
private:
  int a;			// Field
};


int main() {
  A a(0);

  // Variable initialized with value
  int vv = a.val();
  cout << "vv : " << vv << " A.a : " << a.val() << endl; // vv : 0 A.a : 0
  vv = 1;
  cout << "vv : " << vv << " A.a : " << a.val() << endl; // vv : 1 A.a : 0
  // Variable initialized with pointer
  int vp = *a.ptr();
  cout << "vp : " << vp << " A.a : " << a.val() << endl; // vp : 0 A.a : 0
  vp = 2;
  cout << "vp : " << vp << " A.a : " << a.val() << endl; // vp : 2 A.a : 0
  // Variable initialized with reference
  int vr = a.ref();
  cout << "vr : " << vr << " A.a : " << a.val() << endl; // vr : 0 A.a : 0
  vr = 3;
  cout << "vr : " << vr << " A.a : " << a.val() << endl; // vr : 3 A.a : 0
  // Reference initialized with value : not possible
  // int& rv = a.val();
  // cout << "rv : " << rv << " A.a : " << a.val() << endl;
  // rv = 4;
  // cout << "rv : " << rv << " A.a : " << a.val() << endl;
  // Reference initialized with pointer
  int& rp = *a.ptr();
  cout << "rp : " << rp << " A.a : " << a.val() << endl; // rp : 0 A.a : 0
  rp = 5;
  cout << "rp : " << rp << " A.a : " << a.val() << endl; // rp : 5 A.a : 5
  // Reference initialized with reference
  int& rr = a.ref();
  cout << "rr : " << rr << " A.a : " << a.val() << endl; // rr : 5 A.a : 5
  rr = 6;
  cout << "rr : " << rr << " A.a : " << a.val() << endl; // rr : 6 A.a : 6
  // Pointer initialized with address
  int* pp = a.ptr();
  cout << "*pp : " << *pp << " A.a : " << a.val() << endl; // *pp : 6 A.a : 6
  *pp = 7;
  cout << "*pp : " << *pp << " A.a : " << a.val() << endl; // *pp : 7 A.a : 7
  // Pointer initialized with address of value : not possible
  // int* pv = &a.val();
  // cout << "pv : " << pv << " A.a : " << a.val() << endl;
  // *pv = 8;
  // cout << "pv : " << pv << " A.a : " << a.val() << endl;
  // Pointer initialized with address of reference
  int* pr = &a.ref();
  cout << "*pr : " << *pr << " A.a : " << a.val() << endl; // *pr : 7 A.a : 7
  *pr = 9;
  cout << "*pr : " << *pr << " A.a : " << a.val() << endl; // *pr : 9 A.a : 9
}
