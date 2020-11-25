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
		cout << "이름: " << name << "\n국어: " << korean << "\n컴퓨터: " << computer;
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
	void display() { show(); cout << "\n수학: " << math << "\n----------------------" << "\n평균: " << getAverage() << "\n\n"; }
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
	void display() { show(); cout << "\n과학: " << science << "\n도덕: " << moral << "\n----------------------" << "\n평균: " << getAverage() << "\n\n"; }
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
	void display() { show(); cout << "\n영어: " << english << "\n역사: " << history << "\n----------------------" << "\n평균: " << getAverage() << "\n\n"; }
};

int main() {
	FirstGrade f("홍길동", 90, 81, 88);
	SecondGrade s("장영실", 73, 91, 99, 68);
	ThirdGrade t("정도전", 81, 53, 80, 96);

	f.display();
	s.display();
	t.display();

	return 0;
}