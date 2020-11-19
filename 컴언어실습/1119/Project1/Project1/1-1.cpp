#include <iostream>
using namespace std;

class Book;
void Sub(Book &b, int price);

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
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }
	int getPrice(void) { return price; }
	void setPrice(int p) { price = p; }
	friend void Sub(Book &b, int price);
};

void Sub(Book &b, int price) {
	b.price -= price;
}

int main() {
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);

	Sub(a, 500); 
	Sub(b, 1000);

	a.show();
	b.show();

	return 0;
}