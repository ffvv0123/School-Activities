#include <iostream>
using namespace std;

class Exp {
	int result;
	int base;
	int exp;
public:
	Exp();
	Exp(int a);
	Exp(int a, int b);
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};

Exp::Exp() {
	base = 1; exp = 1;
}

Exp::Exp(int a) {
	base = a; exp = 1;
}

Exp::Exp(int a, int b) {
	base = a; exp = b;
}

int Exp::getValue() {
	result = 1;
	for (int i = 1; i <= exp; i++) {
		result *= base;
	}
	return result;
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return exp;
}

bool Exp::equals(Exp b) {
	if (b.getValue() == result)
		return true;
	else false;
}

int main() {
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a의 베이스 " << a.getBase() << ", " << "a의 지수 " << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;

	return 0;
}