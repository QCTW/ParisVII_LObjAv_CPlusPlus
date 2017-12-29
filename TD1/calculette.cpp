//============================================================================
// Name        : calculette.cpp
// Author      : Quincy HSIEH
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
	int i, j;
	char cOperation;
	cout << "Entrer le premier nombre : ";
	cin >> i;
	cout << "Entrer le deuxieme nombre : ";
	cin >> j;
	cout << "Operation a effectuer ('+' ou '-' ou '*' ou '/' ou '%' ?) : ";
	cin >> cOperation;
	int nResult = i+j;
	cout << "Le resultat de la multiplication de " << i << " par " << j << " est " << nResult;
	return EXIT_SUCCESS;
}
