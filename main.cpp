#include <iostream>
#include "Point2d.h"
#include "String.h"

using namespace std;

int main(int argc, char** argv) {
	
	Point2D p1;
	p1.x = -5;
	p1.y = 4;

	Point2D p2;
	p2.x = 12;
	p2.y = 2;

	String a;
	String b("Pepito");
	//String("%s", "Hola");

	float distance = p1.distanceTo(p2);
	printf("%f\n", distance);

	system("pause");
}