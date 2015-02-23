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

	p1 += p2;

	cout << p1.x << " " << p1.y << endl;
	cout << p2.x << " " << p2.y << endl;

	if (p1 != p2) {
		cout << "They are not equal!" << endl;
	}
	else {
		cout << "They are equal!" << endl;
	}

	p1 = p2; 

	if (p1 != p2) {
		cout << "They are not equal!" << endl;
	}
	else {
		cout << "They are equal!" << endl;
	}

	system("pause");

}