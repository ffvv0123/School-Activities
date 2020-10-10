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
		cout << "메모리를 할당할 수 없습니다.";
		exit(1);
	}

	char name[80];
	int radius;

	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
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
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;

	for (int i = 0; i < size; i++) {
		if (strcmp(name, p[i].getName()) == 0) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
			count++;
		}
	}

	if (count == 0)
		cout << name << "은 찾을 수 없습니다." << endl;
}

void CircleManager::searchByArea() {
	int surfaceMin;
	int count = 0;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> surfaceMin;

	cout << surfaceMin << "보다 큰 원을 검색합니다." << endl;

	for (int i = 0; i < size; i++) {
		if (surfaceMin < p[i].getArea()) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
			count++;
		}
	}

	if (count == 0)
		cout << "면적이 " << surfaceMin << "보다 큰 원은 없습니다." << endl;
}

int main()
{
	int size;
	cout << "원의 개수 >> ";
	cin >> size;

	CircleManager circle(size);
	circle.searchByName();
	circle.searchByArea();

	return 0;
}