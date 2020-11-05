#include <iostream>
#include <string>
using namespace std;

class Member {
	string name;
	string id;
	int age;
public:
	Member() { name = "noname"; id = "none"; age = 0; }
	Member(string name, string id, int age) {
		this->name = name;
		this->id = id;
		this->age = age;
	}
	void setName(string name) { this->name = name; }
	void setId(string id) { this->id = id; }
	void setAge(int age) { this->age = age; }

	void getName(string name) { this->name = name; }
	void getId(string id) { this->id = id; }
	void getAge(int age) { this->age = age; }

	void printM();
};

void Member::printM() {
	cout << name << ", " << id << ", " << age << endl;
}

int main()
{
	Member Kim;
	Member Lee("Lee Hi", "2016001", 22);

	Kim.printM();
	Lee.printM();

	Kim.setName("Kim Haha");
	Kim.setId("2016020");
	Kim.setAge(29);

	Kim.printM();

	return 0;
}