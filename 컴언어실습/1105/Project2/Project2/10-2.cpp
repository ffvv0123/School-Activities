#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	//Circle(Circle& c);
	Circle() { radius = 1; }
	Circle(int radius) { 
		this->radius = radius; 
		//cout << "인자 1개 생성자: " << radius << endl;
	}
	//~Circle() { cout << "소멸자: " << radius << endl; }
	double getArea() { return 3.14 * radius * radius; }
};
/*
Circle::Circle(Circle& c) {
	this->radius = c.radius;
	cout << "복사 생성자 실행  radius = " << radius << endl;
}
*/
int main() {
	Circle src(30);
	Circle dest(src);

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "사본의 면적 = " << dest.getArea() << endl;


	//dest.radius = 10;
	//cout << "사본의 면적 = " << dest.getArea() << endl;
	return 0;
}