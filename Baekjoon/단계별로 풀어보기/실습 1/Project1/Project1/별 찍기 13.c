/* �־��� ��Ģ�� ã�ƺ���. �þ�ٰ� �پ���.
for�� ��ø�� ����� 2�� ����. (����, ����)*/
#pragma warning(disable:4996) //VS2019 scanf�Լ� ���� ����
#pragma warning(disable:6031) //VS2019 scanf�Լ� ���� ����
#include <stdio.h> //��ó���⿡ stdio.h ���� �ִ´�.

int main()
{
	int trial; //Ƚ�� ����

	scanf(" %d", &trial); //Ƚ�� �ް�

	for (int j = 1; j <= trial; j++) { //�����ϴ� for�� ���⼱ �� �ٲ� for��
		for (int i = 1; i <= j; i++) { //�����ϴ� for�� ���⼱ �� ����
			printf("*");
		}printf("\n");
	}

	for (int j = 1; j < trial; j++) { //�����ϴ� for�� ���⼱ �� �ٲ� for��
		for (int i = trial; i >j ; i--) { //�����ϴ� for�� ���⼱ �� ����
			printf("*");
		}printf("\n");
	}
}