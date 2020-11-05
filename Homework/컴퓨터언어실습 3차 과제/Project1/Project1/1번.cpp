#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
	int x, y;
	void getPoint();
};

void Point::getPoint() {
	cin >> x >> y;
}

int main() {
	Point p1, p2;

	cout << "Input p1(x, y):";
	p1.getPoint();

	cout << "Input p2(x, y):";
	p2.getPoint();

	double distance = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));

	cout << "The distance [p1~p2]: " << distance << endl;

	return 0;
}