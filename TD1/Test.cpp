/*
 * Test.cpp
 *
 *  Created on: 1 oct. 2015
 *      Author: Quincy
 */
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "Point.cpp"
using namespace std;

int main(void)
{
	Point p1(3,6);
	Point p2 = p1;
	Point *p3 = &p1;
	cout << p1;
	cout << p2;
	cout << p3;
	return EXIT_SUCCESS;
}
