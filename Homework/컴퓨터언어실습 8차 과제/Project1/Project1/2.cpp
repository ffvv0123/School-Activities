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
		cout << getTitle() << ' ' << price << "원 " << pages << " 페이지" << endl;
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
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);

	if (a == "명품 C++")
		cout << "명품 C++ 입니다." << endl;

	if (a == b)
		cout << "두 책이 같은 책입니다." << endl;
	else
		cout << "두 책은 다른 책입니다." << endl;

	return 0;
}