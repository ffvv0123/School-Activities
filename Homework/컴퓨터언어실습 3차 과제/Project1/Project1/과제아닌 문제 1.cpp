#include <iostream>
#include <string>
using namespace std;

class Grade {
public:
	string name;
	int kor, eng, sum;
	double getAve();
	void getSum();
	void showG();
	Grade();
	Grade(string n, int k, int e);
};

void Grade::getSum() {
	sum = kor + eng;
}

double Grade::getAve() {
	return sum / 2.0;
}

Grade::Grade() { name = "Noname"; kor = eng = 0; }

void Grade::showG() {
	cout << name << endl;
	cout << kor << ", " << eng << endl;
	cout << sum << ", " << getAve() << endl;
	cout << "==========" << endl;
}

Grade::Grade(string n, int k, int e) {
	name = n; kor = k; eng = e;
}

int main() {
	Grade Lee;
	Lee.getSum();
	Lee.showG();

	Grade Kim("Kim Hi", 93, 84);
	Kim.getSum();
	Kim.showG();

	return 0;
}