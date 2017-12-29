/*
 * Point.hpp
 *
 *  Created on: 1 oct. 2015
 *      Author: Quincy
 */

#ifndef POINT_HPP_
#define POINT_HPP_

class Point
{
	private:
		int nX;
		int nY;

	public:
		Point(int x, int y);
		int getX();
		int getY();
		void setX(int x);
		void setY(int y);
		double distance(Point p);
		void afficher();
		void translate(int deltaX, int deltaY);
};

#endif /* POINT_HPP_ */
