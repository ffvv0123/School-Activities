#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char arr[30] = "";
	int size = 0;

	cout << "아래에 문자열을 입력하세요.빈 칸이 있어도 됩니다. (한글 안됨) " << endl;
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