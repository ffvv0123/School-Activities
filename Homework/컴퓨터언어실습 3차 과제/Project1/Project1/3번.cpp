#include <iostream>
#include <string>
using namespace std;

class Account{
public:
	string name;
	int id;
	int balance;
	Account(string s, int i, int b);
	string getOwner();
	void deposit(int d);
	int withdraw(int w);
	int inquiry();
};

Account::Account(string s, int i, int b) {
	name = s; id = i; balance = b;
}

string Account::getOwner() {
	return name;
}

void Account::deposit(int d) {
	balance += d;
}

int Account::withdraw(int w) {
	balance -= w;
	return w;
}

int Account::inquiry() {
	return balance;
}

int main() {
	Account a("kitae", 1, 5000);

	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;

	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;

	return 0;
}