/*
 * ValeursAdmises.h
 *
 *  Created on: 3 déc. 2015
 *      Author: Quincy
 */

#ifndef TD11_VALEURSADMISES_H_
#define TD11_VALEURSADMISES_H_

template<class T>
class ValeursAdmises {
public:
	ValeursAdmises(){};
	virtual ~ValeursAdmises(){};
	virtual bool operator() (T val) = 0;
};

#endif /* TD11_VALEURSADMISES_H_ */
