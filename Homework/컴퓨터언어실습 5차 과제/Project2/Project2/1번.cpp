#include <iostream>
using namespace std;

class Complex {
	int real, image;
public:
	Complex() { real = image = 1; }
	Complex(int r, int i) { real = r; image = i; }
	void setReal(int r) { real = r; }
	void setImage(int i) { image = i; }
	void pCom();
};

void Complex::pCom() {
	cout << real << " + " << image << "i" << endl;
}

int main()
{
	Complex* a = new Complex[2];
	if (!a) {
		cout << "메모리 할당 불가";
		return 0;
	}
	Complex* b = new Complex[2];
	if (!b) {
		cout << "메모리 할당 불가";
		return 0;
	}

	a->pCom();
	b->pCom();

	cout << "--------------" << endl;

	a->setReal(4);
	b->setImage(9);

	a->pCom();
	b->pCom();

	delete[] b;
	delete[] a;
	b = NULL;
	a = NULL;

	return 0;
}