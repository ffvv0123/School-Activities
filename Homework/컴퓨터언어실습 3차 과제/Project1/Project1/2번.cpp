#include <iostream>
using namespace std;

class Point {
public:
	int x, y;
	void showP();
	Point() { x = 0; y = 0; }
	Point(int x1, int y1);
};

void Point::showP() {
	cout << "x: " << x << ", y: " << y << endl;
}

Point::Point(int x1, int y1) {
	x = x1; y = y1;
}

int main() {
	Point p1;
	Point p2(3, 4);

	p1.showP();
	p2.showP();

	return 0;
}