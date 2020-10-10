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
	int num;
	int count = 0;
	int radius;

	cout << "원의 개수 >> ";
	cin >> num;
	if (num <= 0) return 0;

	Circle* p = new Circle[num];

	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	for (int i = 0; i < num; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> radius;
		p->setRadius(radius);

		if (p->getArea() > 100)
			count++;
	}

	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;

	delete [] p;
	return 0;
}