#include <iostream>
#include <string>
using namespace std;

// ¶ç¾î¾²±â 20 ? 63 A 65 Z 90

int main(void) {
	string A, E, I, O, U;
	string str, code = "";
	string temp, tempA, tempE, tempI, tempO, tempU;
	int count[5] = { 0 };
	int indexA[100], indexE[100], indexI[100], indexO[100], indexU[100];
	int i, j;
	int len;

	cin >> A >> E >> I >> O >> U;
	cin.ignore();

	getline(cin, str);

	for (i = 0; i < 100; i++)
		indexA[i] = indexE[i] = indexI[i] = indexO[i] = indexU[i] = -1;

	len = str.length();
	for (i = 0, j = 0; i < len; i++) {
		if (str[i] == 'A') {
			count[0]++;
			indexA[j] = i;
			j++;
		}
	}

	for (i = 0, j = 0; i < len; i++) {
		if (str[i] == 'E') {
			count[1]++;
			indexE[j] = i;
			j++;
		}
	}

	for (i = 0, j = 0; i < len; i++) {
		if (str[i] == 'I') {
			count[2]++;
			indexI[j] = i;
			j++;
		}
	}

	for (i = 0, j = 0; i < len; i++) {
		if (str[i] == 'O') {
			count[3]++;
			indexO[j] = i;
			j++;
		}
	}

	for (i = 0, j = 0; i < len; i++) {
		if (str[i] == 'U') {
			count[4]++;
			indexU[j] = i;
			j++;
		}
	}

	for (i = 0; i < len; i++) {
		if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			str[i] = '?';
	}

	if (count[0] != 0) {
		tempA += to_string(count[0]);
		for (i = 0; i < count[0]; i++) {
			tempA += to_string(indexA[i]);
		}
		code += (A + tempA);
	}

	if (count[1] != 0) {
		tempE += to_string(count[1]);
		for (i = 0; i < count[1]; i++) {
			tempE += to_string(indexE[i]);
		}
		code += (E + tempE);
	}

	if (count[2] != 0) {
		tempI += to_string(count[2]);
		for (i = 0; i < count[2]; i++) {
			tempI += to_string(indexI[i]);
		}
		code += (I + tempI);
	}

	if (count[3] != 0) {
		tempO += to_string(count[3]);
		for (i = 0; i < count[3]; i++) {
			tempO += to_string(indexO[i]);
		}
		code += (O + tempO);
	}

	if (count[4] != 0) {
		tempU += to_string(count[4]);
		for (i = 0; i < count[4]; i++) {
			tempU += to_string(indexU[i]);
		}
		code += (U + tempU);
	}

	for (i = 0; i < len; i++) {
		temp += to_string((int)str[i]);
	}
	code += temp;

	cout << code;

	return 0;
}