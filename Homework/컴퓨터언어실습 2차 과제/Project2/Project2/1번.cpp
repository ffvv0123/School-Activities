#include <iostream>
using namespace std;

int main()
{
	char arr[20] = "";
	int size = 0;
	int key;
	char* p;

	cout << "���ڿ�? ";
	cin >> arr;

	for (int i = 0; arr[i] != NULL; i++) {
		size++;
	}

	cout << "��ȣ Ű(����)? ";
	cin >> key;

	cout << "��ȣȭ�� ���ڿ�: ";

	p = arr;

	for (int i = 0; i < size; i++) {
		*(p + i) = *(p + i) + key;
	}
	
	for (int i = 0; i < size; i++)
		cout << arr[i];
	cout << endl;

	return 0;
}

//Warming up C programming 359p. 8��