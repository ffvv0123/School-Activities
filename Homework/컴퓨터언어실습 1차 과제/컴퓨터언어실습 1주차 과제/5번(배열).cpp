// No.5 백준 2751, https://www.acmicpc.net/problem/2751, n = 100까지

#include <iostream>
using namespace std;

int main()
{
	int num, temp;
	int arr[100] = { 0 };
    int index_min;

    cout << "입력할 수의 개수를 입력하세요 ";
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

    for (int i = 0; i < num - 1; i++) {       
        index_min = i;
        for (int j = i + 1; j < num; j++) {
            if (arr[index_min] > arr[j])
                index_min = j;
        }
        if (i != index_min) { 
            temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }                       
    }

    for (int i = 0; i < num; i++)
        cout << arr[i] << endl;
}

