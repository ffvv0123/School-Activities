#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main()
{
	Circle* p;

	int size;
	int count = 0;
	int radius;
	cout << "원의 개수 >> ";
	cin >> size;

	p = new Circle[size];

	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> radius;
		p[i].setRadius(radius);
		if (p[i].getArea() >= 100)
			count++;
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;

	delete[] p;
	p = NULL;

	return 0;
}