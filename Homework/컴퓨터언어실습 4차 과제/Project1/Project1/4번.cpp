#include <iostream>
using namespace std;

class Adder {
	int op1, op2;
public:
	Adder(int op1, int op2);
	int process();
};

Adder::Adder(int op1, int op2) {
	this->op1 = op1;
	this->op2 = op2;
}

int Adder::process() {
	return op1 + op2;
}

class Calculator {
public:
	void run();
};

void Calculator::run() {
	int a, b;
	cout << "두 개의 수를 입력하세요 >> ";
	cin >> a >> b;

	Adder adder(a, b);
	cout << "두 수의 합은 " << adder.process();
}

int main() {
	Calculator calc;
	calc.run();

	return 0;
}