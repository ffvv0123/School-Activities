#include <iostream>
#include <cstring>
#define _CRT_NO_SECURE_WARNINGS
using namespace std;

class Circle {
	int radius;
	char name[80];
public:
	void setCircle(char* name, int radius);
	double getArea();
	char* getName();
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

void Circle::setCircle(char* name, int radius) {
	strcpy(this->name, name); 
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

char* Circle::getName() {
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

	char name[80];
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
	char name[80];
	int count = 0;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;

	for (int i = 0; i < size; i++) {
		if (strcmp(name, p[i].getName()) == 0) {
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