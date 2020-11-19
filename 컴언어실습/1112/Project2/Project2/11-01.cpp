#include <iostream>
using namespace std;

class Person {
public:
	double money; 
	void addMoney(int money) {
		this->money += money;
	}
	static int sharedMoney; 
	static void addShared(int n) {
		sharedMoney += n;
	}
};

int Person::sharedMoney = 10; 

int main() {
	Person han;
	han.money = 100; 
	han.sharedMoney = 200; 

	Person lee;
	lee.money = 150; 
	lee.addMoney(200); 
	lee.addShared(200);

	cout << han.money << ' ' << lee.money << endl;
	cout << han.sharedMoney << ' ' << lee.sharedMoney << endl;

	return 0;
}
