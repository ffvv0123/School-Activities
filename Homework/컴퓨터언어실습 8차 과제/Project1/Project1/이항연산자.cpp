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
		cout << "�̸�: " << name << ", ü��: " << hp << ", ���ݷ�: " << attack << endl;
	}
	string getName() { return name; }
	int getHp() { return hp; }
	bool operator==(string name);	// ��ü�� �̸��� ���ڿ��� ��ġ�� ���
	bool operator==(Monster op);	// ��ü�� ������ ������ ���
	bool operator==(int hp);		// ��ü�� hp�� ������ ��ġ�ϴ� ��� 
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
		cout << "��ü�� �̸��� Zombie �Դϴ�." << endl;
	else
		cout << "��ü�� �̸��� " << op1.getName() << " �Դϴ�." << endl;

	if (op1 == op2)
		cout << "�� ��ü�� �����մϴ�." << endl;
	else
		cout << "�� ��ü�� �ٸ��ϴ�." << endl;

	if (op1 == 200)
		cout << "��ü�� hp�� " << op1.getHp() << "�Դϴ�." << endl;
	else
		cout << "��ü�� hp�� 200 �Դϴ�." << endl;

	op1.show();
	op2.show();

	return 0;
}