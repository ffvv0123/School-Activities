#include <iostream>
using namespace std;

int main()
{
	char arr[20] = "";
	int size = 0;
	int key;
	char* p;

	cout << "문자열? ";
	cin >> arr;

	for (int i = 0; arr[i] != NULL; i++) {
		size++;
	}

	cout << "암호 키(정수)? ";
	cin >> key;

	cout << "암호화된 문자열: ";

	p = arr;

	for (int i = 0; i < size; i++) {
		*(p + i) = *(p + i) + key;
	}
	
	for (int i = 0; i < size; i++)
		cout << arr[i];
	cout << endl;

	return 0;
}

//Warming up C programming 359p. 8번