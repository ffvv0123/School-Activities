/* �ܹ����� �ּҰ���, ������� �ּҰ����� ���ϰ�, ���� �ؼ� -50 �ϱ�*/
#pragma warning(disable:4996) //VS2019 scanf�Լ� ���� ����
#pragma warning(disable:6031) //VS2019 scanf�Լ� ���� ����
#include <stdio.h> //��ó���⿡ stdio.h ���� �ִ´�.

int main()
{
	int hamburger;
	int drink;
	int min_ham = 2000; //�ܹ��� �ְ��� 2000, �̰ź��� ������ �ּڰ� �ǰ�
	int min_drink = 2000; //����� �ְ��� 2000, �̰ź��� ������ �ּڰ� �ǰ�

	for (int i = 1; i <= 3; i++) { //for������ 3�� �ݺ�
		scanf(" %d", &hamburger); //�ܹ��� ���� �ް�
		if (hamburger <= min_ham) { //���� ��
			min_ham = hamburger; //���� ����
		}
	}
	for (int j = 1; j <= 2; j++) { //for�� 2�� �ݺ�
		scanf(" %d", &drink); //���� ���� �ް�
		if (drink <= min_drink) { //���� ��
			min_drink = drink; //���� ����
		}
	}
	printf("%d", min_ham + min_drink - 50); //���

	return 0;
}