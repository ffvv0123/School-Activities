#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n;
		if (n <= 0) return; 
		
		p = new int[n];
		if (!p) {
			cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
			return;
		}
	}
	void read();
	void write();
	int big();
	~Sample();
};

void Sample::read() {
	for (int i = 0; i < size; i++)
		cin >> p[i];
}

void Sample::write() {
	for (int i = 0; i < size; i++)
		cout << p[i] << ' ';
	cout << endl;
}

int Sample::big() {
	int max = p[0];
	for (int i = 1; i < size; i++) 
		max = (max < p[i]) ? p[i] : max;

	return max;
}

Sample::~Sample() {
	delete[] p;
}

int main()
{
	Sample s(10);
	s.read();
	s.write();
	cout << "���� ū ���� " << s.big() << endl;

	return 0;
}