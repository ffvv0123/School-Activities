#include <iostream>
using namespace std;

class Monster {
	string name;
	int hp, attack;
public:
	Monster(string name = "None", int hp = 1, int attack = 1) {
		this->name = name; this->hp = hp; this->attack = attack;
	}
	void show() {
		cout << "이름: " << name << ", 체력: " << hp << ", 공격력: " << attack << endl;
	}
	string getName() { return name; }
	int getHp() { return hp; }
	bool operator==(string name);	// 객체의 이름이 문자열과 일치할 경우
	bool operator==(Monster op);	// 객체의 정보가 동일한 경우
	bool operator==(int hp);		// 객체의 hp와 정수가 일치하는 경우 
};

bool Monster::operator==(string name) {
	return this->name == name;
}

bool Monster::operator==(Monster op) {
	return {
		this->name == op.name && this->hp == op.hp && this->attack == op.attack
	};
}

bool Monster::operator==(int hp) {
	return this->hp == hp;
}

int main() {
	Monster op1("Zombie"), op2("Zombie", 100, 10);

	if (op1 == "Zombie")
		cout << "객체의 이름이 Zombie 입니다." << endl;
	else
		cout << "객체의 이름이 " << op1.getName() << " 입니다." << endl;

	if (op1 == op2)
		cout << "두 객체는 동일합니다." << endl;
	else
		cout << "두 객체는 다릅니다." << endl;

	if (op1 == 200)
		cout << "객체의 hp는 " << op1.getHp() << "입니다." << endl;
	else
		cout << "객체의 hp는 200 입니다." << endl;

	op1.show();
	op2.show();

	return 0;
}