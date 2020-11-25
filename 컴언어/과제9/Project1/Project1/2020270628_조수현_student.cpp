#include <iostream>
using namespace std;

class Student {
	string name;
	int korean, computer;
protected:
	Student(string name, int korean, int computer) { this->name = name; this->korean = korean; this->computer = computer; }
	string getName() { return name; }
	double getSum() { return korean + computer; }
	void show() {
		cout << "�̸�: " << name << "\n����: " << korean << "\n��ǻ��: " << computer;
	}
};

class FirstGrade : virtual public Student {
	int math;
public:
	FirstGrade(string name, int korean, int computer, int math) : Student(name, korean, computer) {
		this->math = math;
	}
	double getAverage() {
		return (getSum() + math) / 3;
	}
	void display() { show(); cout << "\n����: " << math << "\n----------------------" << "\n���: " << getAverage() << "\n\n"; }
};

class SecondGrade : virtual public Student {
	int science, moral;
public:
	SecondGrade(string name, int korean, int computer, int science, int moral) : Student(name, korean, computer) {
		this->science = science;
		this->moral = moral;
	}
	double getAverage() {
		return (getSum() + science + moral) / 4;
	}
	void display() { show(); cout << "\n����: " << science << "\n����: " << moral << "\n----------------------" << "\n���: " << getAverage() << "\n\n"; }
};

class ThirdGrade : virtual public Student {
	int english, history;
public:
	ThirdGrade(string name, int korean, int computer, int english, int history) : Student(name, korean, computer) {
		this->english = english;
		this->history = history;
	}
	double getAverage() {
		return (getSum() + english + history) / 4;
	}
	void display() { show(); cout << "\n����: " << english << "\n����: " << history << "\n----------------------" << "\n���: " << getAverage() << "\n\n"; }
};

int main() {
	FirstGrade f("ȫ�浿", 90, 81, 88);
	SecondGrade s("�念��", 73, 91, 99, 68);
	ThirdGrade t("������", 81, 53, 80, 96);

	f.display();
	s.display();
	t.display();

	return 0;
}