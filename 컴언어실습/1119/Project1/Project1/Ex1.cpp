#include <iostream>
using namespace std;

class Rect;
bool equals(Rect r, Rect s);

class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool equals(Rect r, Rect s);
};

bool equals(Rect r, Rect s) {	// freind라 접근 가능
	if (r.width == s.width && r.height == s.height)
		return true;
	else
		return false;
}

int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b))				// 컴파일러가 (디폴트) 복사 생성자 호출
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;

	return 0;
}