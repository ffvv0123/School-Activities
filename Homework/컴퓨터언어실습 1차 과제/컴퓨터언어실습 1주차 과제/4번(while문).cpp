// No.4 백준 17293, https://www.acmicpc.net/problem/17293

#include <iostream>
using namespace std;

int main()
{
	int num, save;
	cout << "맥주가 몇 병인지 입력하세요: ";
	cin >> num;
	save = num;

	while (true) {
		if (num > 2) {
			cout << num << " bottles of beer on the wall, " << num << " bottles of beer." << endl;
			cout << "Take one down and pass it around, " << num - 1 << " bottles of beer on the wall.\n" << endl;
			num -= 1;
			continue;
		}
		else if (num == 2) {
			cout << 2 << " bottles of beer on the wall, " << 2 << " bottles of beer." << endl;
			cout << "Take one down and pass it around, " << 1 << " bottle of beer on the wall.\n" << endl;
			num -= 1;
		}
		else if (num == 1) {
			cout << 1 << " bottle of beer on the wall, " << 1 << " bottle of beer." << endl;
			cout << "Take one down and pass it around, no more bottles of beer on the wall.\n" << endl;
			num -= 1;
		}
		else if (num == 0) {
			cout << "No more bottles of beer on the wall, no more bottles of beer." << endl;
			cout << "Go to the store and buy some more, " << save << " bottles of beer on the wall.\n" << endl;
			break;
		}
	}
}