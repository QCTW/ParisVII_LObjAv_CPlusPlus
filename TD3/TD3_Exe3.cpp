/*
 *  Created on: 8 oct. 2015
 *      Author: Quincy
 */
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

int getRefValue(int index, int* nArray)
{
	return nArray[index];
}

int& getRefOfOneValue(int index, int* nArray)
{
	return nArray[index];
}

int main(void)
{
	int nArr[5] = {11,22,33,44,55};

	int nGetRefValue = getRefValue(2, nArr);
	nGetRefValue = 99;
	cout << "nArr[2]=" << nArr[2] << ", nGetRefValue=" << nGetRefValue << endl;

	int& nGetRefOfOneValue = getRefOfOneValue(3, nArr);
	nGetRefOfOneValue = 88;
	cout << "nArr[3]=" << nArr[3] << ", nGetRefOfOneValue="<< nGetRefOfOneValue << endl;
}
