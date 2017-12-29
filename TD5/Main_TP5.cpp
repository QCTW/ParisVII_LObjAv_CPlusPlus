
#include <string>
#include <iostream>

#include "Bilan.hpp"

using namespace std;

int main(void)
{

	Bilan* b;
	cout << "Declare Bilan" << endl;
	b = new Bilan;
	cout << b << endl;
	delete b;
	return 0;
}

void testParameter(Bilan b)
{

}
