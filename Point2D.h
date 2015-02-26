#ifndef __Point2D_H__
#define __Point2D_H__

#include <stdio.h>

class Point2D
{
public:

	// Constructor
	// Point2d();

	// Destructor
	//virtual ~Point2d();

	void setZero()
	{
		x = y = 0.0f;
	}

	bool isBothZero() const {
		return (x == 0.f && y == 0.f);
	}

	void invert() {
		x = -x;
		y = -y;
	}

	Point2D Point2D::operator+ (const Point2D &a) const {  // La x,y del objecte no es modifiquen.

		Point2D tmp;

		tmp.x = x + a.x;
		tmp.y = y + a.y;

		return tmp;
	}

	const Point2D& Point2D::operator+= (const Point2D& a) {

		x += a.x;
		y += a.y;
		return (*this);
	}

	Point2D Point2D::operator- (const Point2D& a) const {

		Point2D tmp;

		tmp.x = x - a.x;
		tmp.y = y - a.y;

		return tmp;
	}

	const Point2D& Point2D::operator-= (const Point2D& a) {

		x -= a.x;
		y -= a.y;
		return (*this);
	}

	bool Point2D::operator== (const Point2D& a) const {
		return x == a.x && y == a.y;
	}

	bool Point2D::operator!= (const Point2D& a) const {
		return x != a.x || y != a.y;
	}

	void print_info() const {
		printf("Componente x: %.1f\n", x);
		printf("Componente y: %.1f\n", y);
	}

public:
	float x, y;
};

#endif // !__Point2D_H__