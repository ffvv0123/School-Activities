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
	void show() { cout << title << ' ' << price << "��" << endl; }
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
	Book cpp("��ǰC++", 10000);
	Book java = cpp;

	java.set("��ǰ�ڹ�", 12000);

	cpp.show();
	java.show();

	return 0;
}

/*
1�� ����

�ڵ� ����

*/

/*
2�� ����

Book::Book(Book& b) {
	this->title = b.title;
	this->price = b.price;
}

*/

/*
3�� ����

Book java = cpp;
�� �κп��� cpp��ü�� �������� ������ �Ҹ�Ǵ� ����

*/

/*
4�� ����

�ڵ� ����

*/
