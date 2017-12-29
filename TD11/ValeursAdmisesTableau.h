/*
 * ValeursAdmisesTableau.h
 *
 *  Created on: 3 déc. 2015
 *      Author: Quincy
 */

#ifndef TD11_VALEURSADMISESTABLEAU_H_
#define TD11_VALEURSADMISESTABLEAU_H_

#include "ValeursAdmises.h"

template<class T>
class ValeursAdmisesTableau: public ValeursAdmises {
public:
	ValeursAdmisesTableau(T*, int);
	virtual ~ValeursAdmisesTableau();
	virtual bool operator() (T val)
	{
		for(int i=0; i<nArraySize; i++)
		{
			if(cArray[i]==val)
				return true;
		}
		return false;
	}
private:
	int nArraySize;
	T* cArray;
};

#endif /* TD11_VALEURSADMISESTABLEAU_H_ */
