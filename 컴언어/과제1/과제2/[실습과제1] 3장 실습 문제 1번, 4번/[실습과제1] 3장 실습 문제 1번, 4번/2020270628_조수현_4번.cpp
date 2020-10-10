#include <iostream>
using namespace std;

class CoffeeMachine {
private:
	int coffee, water, sugar;
public:
	CoffeeMachine(int c, int w, int s);
	void drinkAmericano();
	void drinkSugarCoffee();
	void drinkEspresso();
	void show();
	void fill();
};

CoffeeMachine::CoffeeMachine(int c, int w, int s) {
	coffee = c; water = w; sugar = s;
}

void CoffeeMachine::drinkAmericano() {
	if (coffee >= 1 && water >= 2) {
		coffee -= 1;
		water -= 2;
	}
	else
		cout << endl << "��ᰡ �����Ͽ� �Ƹ޸�ī�븦 ���� �� �����ϴ�." << endl;

}

void CoffeeMachine::drinkSugarCoffee() {
	if (coffee >= 1 && water >= 2 && sugar >= 1) {
		coffee -= 1;
		water -= 2;
		sugar -= 1;
	}
	else
		cout << endl << "��ᰡ �����Ͽ� ����Ŀ�Ǹ� ���� �� �����ϴ�." << endl;

}

void CoffeeMachine::drinkEspresso() {
	if (coffee >= 1 && water >= 1) {
		coffee -= 1;
		water -= 1;
	}
	else
		cout << endl << "��ᰡ �����Ͽ� ���������Ҹ� ���� �� �����ϴ�." << endl;

}

void CoffeeMachine::show() {
	cout << "Ŀ�Ǹӽ� ���� : Ŀ�� = " << coffee << "   �� = " << water << "  ���� = " << sugar << endl;
}

void CoffeeMachine::fill() {
	coffee = 10, water = 10, sugar = 10;

}

int main() {
	CoffeeMachine java(5, 8, 2);

	java.drinkAmericano();
	java.show();

	java.drinkSugarCoffee();
	java.show();

	java.drinkEspresso();
	java.show();

	java.drinkSugarCoffee();
	java.show();

	java.drinkSugarCoffee();
	java.show();

	java.drinkAmericano();
	java.show();

	java.fill();
	java.show();

	return 0;
}