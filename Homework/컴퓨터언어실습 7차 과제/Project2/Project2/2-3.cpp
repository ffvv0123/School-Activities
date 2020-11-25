#include <iostream>
using namespace std;

class Person {
	static int numPerson;
	int id;
	double weight;
	string name;
public:
	Person(int id = 1, string name = "Grace", double weight = 20.5);
	~Person() { numPerson--; }
	void show() { cout << id << ' ' << weight << ' ' << name << ' '<< numPerson <<endl; }
	static int nPerson();
};

int Person::numPerson = 0;

Person::Person(int id, string name, double weight) {
	this->id = id;
	this->name = name;
	this->weight = weight;
	numPerson++;
}

int Person::nPerson() {
	cout << numPerson << endl;
	return numPerson;
}

int main() {
	Person grace;
	grace.show();

	Person helen(13, "Helen", 32.5);
	helen.show();

	Person* p = new Person[2]{ {43, "Tera"}, {98, "Hera"} };
	p[0].show();
	p[1].show();

	Person::nPerson();
	delete[] p;
	Person::nPerson();

	return 0;
}