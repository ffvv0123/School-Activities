#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char arr[30] = "";
	int size = 0;

	cout << "�Ʒ��� ���ڿ��� �Է��ϼ���.�� ĭ�� �־ �˴ϴ�. (�ѱ� �ȵ�) " << endl;
	cin.getline(arr, 30, '\n');

	for (int i = 0; arr[i] != NULL; i++)
		size++;
	
	for (int i = 0; i < size; i++) {
		char first[30] = "";
		char sub[30] = "";

		sub[0] = arr[size - 1];
		strncpy(first, arr, size - 1);
		strcat(sub, first);
		strcpy(arr, sub);

		cout << arr << endl;
	}
}