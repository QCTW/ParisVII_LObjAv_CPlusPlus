/*
 * Point.cpp
 *
 *  Created on: 1 oct. 2015
 *      Author: Quincy
 */

#include "Point.hpp" //"header_file_path"
#include <math.h>
#include <iostream> //<name_of_library>

Point::Point(int x, int y)
{
	nX = x;
	nY = y;
}

int Point::getX()
{
	return nX;
}

int Point::getY()
{
	return nY;
}

void Point::setX(int x)
{
	nX = x;
}

void Point::setY(int y)
{
	nY = y;
}

double Point::distance(Point p)
{
	return sqrt( (double)( (p.getX()-this->nX)^2 + (p.getY()-nY)^2 ) );
}

void Point::afficher()
{
	std::cout << "Point: "+this->nX+","+this->nY;
}

void Point::translate(int deltaX, int deltaY)
{
	nX = nX + deltaX;
	nY = nY + deltaY;
}
