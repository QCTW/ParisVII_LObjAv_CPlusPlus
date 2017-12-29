/*
 * ValeursAdmisesIntervalle.h
 *
 *  Created on: 3 déc. 2015
 *      Author: Quincy
 */

#ifndef TD11_VALEURSADMISESINTERVALLE_H_
#define TD11_VALEURSADMISESINTERVALLE_H_

#include "ValeursAdmises.h"

class ValeursAdmisesIntervalle: public ValeursAdmises
{
public:
	ValeursAdmisesIntervalle(char, char);
	virtual ~ValeursAdmisesIntervalle();
	virtual bool operator() (char val)
	{
		if(val>cStart && val <cEnd)
			return true;
		return false;
	}

private:
	char cStart, cEnd;
};

#endif /* TD11_VALEURSADMISESINTERVALLE_H_ */
