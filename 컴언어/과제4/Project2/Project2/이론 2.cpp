#include <iostream>
using namespace std;

class Rect {
	int width, height;
public:
	Rect() { width = 1; height = 1; }
	Rect(int w, int h) { width = w; height = h; }
	int getWidth();
	int getHeight();
	int getArea();
};

int Rect::getArea() {
	return width * height;
}

int main() {
	Rect* q;
	int w, h;
	cin >> w >> h;

	q = new Rect(w, h);
	cout << q->getArea() << endl;
	
	delete q;
	return 0;
}