#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point() { x = y = 0; }
	Point(int x1, int y1);
	void setX() {
		cin >> x;
	}
	void setY();
	void showP();
};

Point::Point(int x1, int y1) {
	x = x1; y = y1;
}


void Point::setY() {
	cin >> y;
}

void Point::showP() {
	cout << "x: " << x << ", y: " << y << endl;
}

int main() {
	Point p1, p2;
	
	cout << "Input p2.x: ";
	p2.setX();

	cout << "Input p2.y: ";
	p2.setY();

	cout << "p1. ";
	p1.showP();
	cout << "p2. ";
	p2.showP();

	return 0;
}