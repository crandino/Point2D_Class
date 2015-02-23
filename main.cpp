#include <iostream>
#include "Point2d.h"

using namespace std;

int main(int argc, char** argv) {
	
	Point2D p1;
	p1.x = 0;
	p1.y = 5;

	Point2D p2;
	p2.x = 3;
	p2.y = 3;

	p1 = p2;

	system("pause");

}