#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class member
{
public:
	int age;
	string name;
};

member M[100001];

bool compare(member a, member b)
{
	return a.age < b.age;
}

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> M[i].age >> M[i].name;
	}

	stable_sort(M, M + N, compare);

	for (int i = 0; i < N; i++)
	{
		cout << M[i].age << " " << M[i].name << "\n";
	}

	return 0;
}