#include <iostream>
using namespace std;

class Book {
	string title;
	int price;
	int pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}

	void show() {
		cout << getTitle() << ' ' << price << "�� " << pages << " ������" << endl;
	}

	string getTitle() {
		return title;
	}

	bool operator==(string str);
	bool operator==(Book op);
};

bool Book::operator==(string str) {
	return this->title == str;
}

bool Book::operator==(Book op) {
	return {
		this->title == op.title && this->price == op.price && this->pages == op.pages
	};
}

int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);

	if (a == "��ǰ C++")
		cout << "��ǰ C++ �Դϴ�." << endl;

	if (a == b)
		cout << "�� å�� ���� å�Դϴ�." << endl;
	else
		cout << "�� å�� �ٸ� å�Դϴ�." << endl;

	return 0;
}