#include <iostream>
using namespace std;

class Circle {
	int radius;
	static int count;
public:
	Circle() { 
		radius = 0; 
		count++;
	}
	Circle(int r) { 
		radius = r; 
		count++;
	}
	~Circle() {
		count--;
	}
	void show() {
		cout << "Radius: " << radius<<", Count : " << count << endl;
	}
};

int Circle::count = 0;

int main() {
	Circle a(5);
	a.show();

	Circle* p = new Circle[2];

	for (int i = 0; i < 2; i++)
		p[i].show();

	a.show();

	delete[] p;
	a.show();

	return 0;
}