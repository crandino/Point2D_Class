#ifndef __Point2D_H__
#define __Point2D_H__

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

	Point2D operator+ (const Point2D& a) const {  // La x,y del objecte no es modifiquen.

		Point2D tmp;

		tmp.x = x + a.x;
		tmp.y = y + a.y;

		return tmp;
	}

	Point2D operator+= (const Point2D& a) {

		x += a.x;
		y += a.y;
		return (*this);
	}

	/*void operator+= (const Point2D& a) {

		x += a.x;
		y += a.y;

		}*/

	Point2D operator- (const Point2D& a) const {

		Point2D tmp;

		tmp.x = x - a.x;
		tmp.y = y - a.y;

		return tmp;
	}

	Point2D operator-= (const Point2D& a) {

		x -= a.x;
		y -= a.y;
		return (*this);
	}

	bool operator== (const Point2D& a) const {
		return x == a.x && y == a.y;
	}

	bool operator!= (const Point2D& a) const {
		return x != a.x || y != a.y;
	}

	Point2D operator= (const Point2D& a) const {
		
		Point2D tmp;
		printf("%d %d\n", a.x, a.y);
		printf("%d\n", a);

		tmp.x = a.x;
		tmp.y = a.y;
		return (*this);
	}

public:
	float x, y;
};

#endif // !__Point2D_H__