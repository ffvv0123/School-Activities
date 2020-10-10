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

	cout << "���� ���� >> ";
	cin >> num;
	if (num <= 0) return 0;

	Circle* p = new Circle[num];

	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	for (int i = 0; i < num; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> radius;
		p->setRadius(radius);

		if (p->getArea() > 100)
			count++;
	}

	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << endl;

	delete [] p;
	return 0;
}