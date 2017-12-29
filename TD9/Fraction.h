/*
 * Fraction.h
 *
 *  Created on: 19 nov. 2015
 *      Author: Quincy
 */

#ifndef FRACTION_H_
#define FRACTION_H_

#include <algorithm>
#include <iostream>
using namespace std;

class Fraction
{
private:
	int x,y;
	static int pgcd(int one, int two)
	{
		int pgcd = 1;
		int nMin = (one<two)?one:two;
		for(int i=one; i>1; i--)
		{
			if(one%i==0 && two%i==0)
			{
				pgcd = i;
				break;
			}
		}
		return pgcd;
	}

public:
	Fraction(int x, int y);
	virtual ~Fraction();
    friend ostream &operator<<( ostream &output, const Fraction &f )
    {
       output << "PGCD(" << f.x << "," << f.y << ")=" << pgcd(f.x, f.y);
       return output;
    }

    Fraction operator+(const Fraction &f)
    {
    	cout << "+ Overloaded in " << f << endl;
    	return f;
    }

    Fraction operator-(const Fraction &f)
    {
    	cout << "- Overloaded in " << f << endl;
    	return f;
    }
};

#endif /* FRACTION_H_ */
