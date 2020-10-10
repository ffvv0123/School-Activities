#include <iostream>
#include <string>
using namespace std;

void ML(string*, int*);
void MR(string*, int*);
void DL(string*, int*);
void DR(string*, int*);
void R(string*, int*);
void Z(string*, int*);
void I(string*, string*, int*);

int main()
{
	string arr;
	string func;
	int order;
	int count = 0;
	int pointer = 0;

	cin >> arr;
	cin >> order;

	pointer = arr.size() - 1;

	for (int i = 0; i < order; i++) {
		cin >> func;

		if (func == "ML")
			ML(&arr, &pointer);

		else if (func == "MR")
			MR(&arr, &pointer);

		else if (func == "DL")
			DL(&arr, &pointer);

		else if (func == "DR")
			DR(&arr, &pointer);

		else if (func == "R")
			R(&arr, &pointer);

		else if (func == "Z")
			Z(&arr, &pointer);
		else
			I(&arr, &func, &pointer);
	}

	cout << arr;
	cout << pointer;

	return 0;
}

void ML(string* arr, int* pointer) {
	*pointer -= 1;
}

void MR(string* arr, int* pointer) {
	*pointer += 1;
}

void DL(string* arr, int* pointer) {
	arr->erase(*pointer - 1, *pointer);
	*pointer += 1;
}

void DR(string* arr, int* pointer) {
	arr->erase(*pointer, *pointer + 1);
	*pointer -= 1;
}

void R(string* arr, int* pointer) {

}

void Z(string* arr, int * pointer) {

}

void I(string* arr, string* func, int * pointer) {

}