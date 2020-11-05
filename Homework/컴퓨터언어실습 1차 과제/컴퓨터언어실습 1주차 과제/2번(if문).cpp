// No.2 백준 1978, https://www.acmicpc.net/problem/1978

#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int count = 0, result = 0;
	cout << "몇 개의 수를 입력받을 지 입력하세요: ";
	cin >> num;

	int arr[100] = {0};

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];

		for (int j = 1; j <= arr[i]; j++)
		{
			if (arr[i] % j == 0)
				count++;
		}

		if (count == 2) 
			result++;

		count = 0;
	}

	cout << result;

	return 0;
}