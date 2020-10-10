#include <iostream>
#include <cstring>
#define _CRT_NO_SECURE_WARNINGS
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};

void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

string Circle::getName() {
	return name;
}

CircleManager::CircleManager(int size) {
	this->size = size;
	if (size <= 0) exit(1);

	p = new Circle[size];
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		exit(1);
	}

	string name;
	int radius;

	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() {
	string name;
	int count = 0;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;

	for (int i = 0; i < size; i++) {
		if (name == p[i].getName()) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << endl;
			count++;
		}
	}

	if (count == 0)
		cout << name << "�� ã�� �� �����ϴ�." << endl;
}

void CircleManager::searchByArea() {
	int surfaceMin;
	int count = 0;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> surfaceMin;

	cout << surfaceMin << "���� ū ���� �˻��մϴ�." << endl;

	for (int i = 0; i < size; i++) {
		if (surfaceMin < p[i].getArea()) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << endl;
			count++;
		}
	}

	if (count == 0)
		cout << "������ " << surfaceMin << "���� ū ���� �����ϴ�." << endl;
}

int main()
{
	int size;
	cout << "���� ���� >> ";
	cin >> size;

	CircleManager circle(size);
	circle.searchByName();
	circle.searchByArea();

	return 0;
}