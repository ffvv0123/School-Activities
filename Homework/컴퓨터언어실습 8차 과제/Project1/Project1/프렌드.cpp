#include <iostream>
using namespace std;

class Circle;

void show(Circle c);

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	friend void show(Circle c);
};

void show(Circle c) {
	cout << "원의 반지름: " << c.radius << ", 원의 넓이: " << c.radius * c.radius * 3.14 << endl;
}

int main() {
	Circle c1(5), c2;

	show(c1);
	show(c2);

	return 0;
}