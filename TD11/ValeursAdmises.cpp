/*
 * ValeursAdmises.cpp
 *
 *  Created on: 3 déc. 2015
 *      Author: Quincy
 */

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "ValeursAdmises.h"
#include "ValeursAdmisesIntervalle.h"
#include "ValeursAdmisesTableau.h"

using namespace std;

int main(void)
{
	ValeursAdmisesIntervalle inter('a', 'd');
	  if(inter('e'))
	    cout<< " la valeur 'e' est ok"<< endl;
	  else
	    cout<< " la valeur 'e' n'est pas ok"<< endl;

	  if(inter('c'))
	    cout<< " la valeur 'c' est ok"<< endl;
	  else
	    cout<< " la valeur 'c' n'est pas ok"<< endl;

	  char tab[] = {'b', 'o', 'n', 'j', 'u', 'r'};
	  ValeursAdmisesTableau tableau(tab, 6);
	  if(tableau('j'))
	    cout<< " la valeur 'j' est ok"<< endl;
	  else
	    cout<< " la valeur 'j' n'est pas ok"<< endl;

	  if(tableau('c'))
	    cout<< " la valeur 'c' est ok"<< endl;
	  else
	    cout<< " la valeur 'c' n'est pas ok"<< endl;

	  return 0;
}
