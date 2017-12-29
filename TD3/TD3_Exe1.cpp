/*
 *  Created on: 8 oct. 2015
 *      Author: Quincy
 */
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

void countDown1(int *pInt)
{
	*pInt = *pInt-1;
	cout << "countDown1(" << *pInt << ")" << endl;
}

void countDown2(int& nInt)
{
	nInt --;
	cout << "countDown2(" << nInt << ")" << endl;
}

int& countDown3(int &nInt)
{
	cout << "countDown3(" << nInt << ")" << endl;
	return nInt;
}

int main(void)
{
	int n = 5;
	while (n>0)
		countDown1( &n );
	cout << "countDown 1 Done!" << endl;

	int m = 5;
	while (m>0)
		countDown2( m );
	cout << "countDown 2 Done!" << endl;

	int o = 5;
	while (o>0)
		countDown3( o )--;
	cout << "countDown 3 Done!" << endl;
	return 0;
}
