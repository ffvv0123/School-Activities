#include <iostream>
using namespace std;

int count_word(const char* sentence, int size);
int main()
{
	char sentence[1000] = "";
	int size = 0;

	cout << "문자열을 입력하세요: ";
	cin.getline(sentence, 1000);

	for (int i = 0; sentence[i] != NULL; i++) {
		size++;
	}

	cout << "문자열에서 단어는 총 " << count_word(sentence, size) << "개 입니다." << endl;

	return 0;
}

int count_word(const char* sentence, int size) {
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (sentence[i] == ' ')
			count++;
	}
	return count + 1;
}

//https://www.acmicpc.net/problem/1152