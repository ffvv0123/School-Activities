#pragma warning(disable:4996) //VS2019���� scanf�Լ� ���� ����
#pragma warning(disable:6031) //VS2019���� scanf�Լ� ���� ����
#include<stdio.h> //stdio���������  ��ó���⿡ ����

int main() //�������Լ�, �������� ���� �޴� ���� �Լ�

{
	int Number; //�� ������ �������� ���ڸ� �Է¹���, ���� ����� ��� �ִ´�.
	int result; // ���� ����� ���Ѵ�. 
	int A, B, C, D; // ����� ���� �ʿ��� ����
	int count = 0; // ���� Ƚ���� 0���� ����. ���� 1�� ����

	scanf("%d", &Number); // ���� �ް�

	result = Number; // result�� �Է� ���� ���� �ִ´�.
	
	while (1) //���� ���� ON

	{
		A = Number / 10; //��Ģ�� ã��
		B = Number % 10;
		C = (A + B) % 10;
		D = (B * 10) + C;

		Number = D; //Number�� D���� ���� ����.
		count++; //1����Ŭ �������� �߰�

		if (D == result) { //���� ó�� �Է¹��� Number�� result���� ���� ���� Number�� D�� ���ٸ�
			break; // ������.
		}
	}

	printf("%d", count); //����Ƚ�� ���

	return 0; //���Ϲ�ȯ
}



