#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	cout << "�Ʒ��� ���ڿ��� �Է��ϼ���. �� ĭ�� �־ �˴ϴ�. (�ѱ� �ȵ�) " << endl;
	getline(cin, s, '\n');
	int len = s.length();

	for (int i = 0; i < len; i++) {
		string first = s.substr(0, len - 1);
		string sub = s.substr(len-1, 1);
		s = sub + first;
		cout << s << endl;
	}

	return 0;
}