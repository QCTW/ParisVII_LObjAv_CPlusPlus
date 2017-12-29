
#include <string>
#include <iostream>

#include "Truc.h"

using namespace std;

int main(void)
{
	Truc c1("Thomas");
	Truc c2("Quincy");
	Truc c3("Christophe");
	Truc c4("Anne");
	Truc c5("Julie");
	cout << c3.getAge() << endl;
	cout << c5.getNom() << endl;
	cout << c5.getSexe() << endl;
	return 0;
}
