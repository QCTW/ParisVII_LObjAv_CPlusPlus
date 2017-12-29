/*
 *  Created on: 8 oct. 2015
 *      Author: Quincy
 */
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
	int a = 2;
	int b = 4;
	int& ref1 = a;
	int& ref2 = b;
	ref1 -= ref2;
	ref2 += ref1;
	cout << "ref1=" << ref1 << ", ref2=" << ref2 << endl;
	a -= b;
	b += a;
	cout << "a=" << a << ", b=" << b << endl;
	cout << "ref1'=" << ref1 << ", ref2'=" << ref2 << endl;
	return 0;
}
