#define _CRT_NO_SECURE_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	Book(Book& b);
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(const char* title, int price) {
	this->price = price;
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
}

Book::~Book() {
	if (title)
		delete[] title;
}

void Book::set(const char* title, int price) {
	if (this->title)
		delete[] this->title;

	this->price = price;
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
}

Book::Book(Book& b) {
	this->price = b.price;
	int len = strlen(b.title);
	this->title = new char[len + 1];
	strcpy(this->title, b.title);
}

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;

	java.set("명품자바", 12000);

	cpp.show();
	java.show();

	return 0;
}

/*
1번 정답

코드 참조

*/

/*
2번 정답

Book::Book(Book& b) {
	this->title = b.title;
	this->price = b.price;
}

*/

/*
3번 정답

Book java = cpp;
이 부분에서 cpp객체는 생성되지 않지만 소멸되는 문제

*/

/*
4번 정답

코드 참조

*/
