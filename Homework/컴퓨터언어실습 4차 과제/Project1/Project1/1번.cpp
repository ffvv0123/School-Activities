#include <iostream>
#define MAX 2
using namespace std;

class Complex {
	int real, image;
public:
	Complex() { real = image = 1; }
	Complex(int r, int i) { real = r; image = i; }
	void setReal(int r) { real = r; }
	void setImage(int i) { image = i; }
	void showC();
};

void Complex::showC() {
	cout << real << " + " << image << "i" << endl;
}

int main()
{
	Complex data[MAX];
	Complex* p = data;

	for (int i = 0; i < MAX; i++) 
		data[i].showC();
	cout << "--------------" << endl;

	data[0].setReal(3);
	p[1].setImage(-8);

	for (int i = 0; i < MAX; i++)
		data[i].showC();

	return 0;
}