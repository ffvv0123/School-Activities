/* �� ���� �Է¹ް�, �� ��°�� ū ���� ã��
�پ��� ����� �ִ�. �迭, ���׿�����, if�� ���..
�̹����� ���׿����� �ẻ��.*/
#pragma warning(disable:4996) //VS2019 scanf�Լ� ���� ����
#pragma warning(disable:6031) //VS2019 scanf�Լ� ���� ����
#include <stdio.h> //��ó���⿡ stdio.h ���� �ִ´�.

int main()
{
	int A, B, C; //���� ����
	int semi_1, semi_2, semi_3, semi_c, semi; //��Һ񱳸� ���� ��������. ������ ����ϴٰ� ���������� ����

	scanf(" %d %d %d", &A, &B, &C); //���� �ް�

	semi_1 = A >= B ? A : B; // A, B �߿��� ū ��
	semi_2 = B >= C ? B : C; // B, C �߿��� ū ��
	semi_3 = A >= C ? A : C; // A, C �߿��� ū ��

	semi_c = semi_1 >= semi_2 ? semi_2 : semi_1; // semi 1 2 �߿��� ���� ��
	semi = semi_c >= semi_3 ? semi_3 : semi_c; // semi c 3 �߿��� ���� ��

	printf("%d", semi); //semi ���

	return 0;
}
/*
if (a > b) {
	if (a > c) { //a>b,c
		if (b > c) printf("%d", b); a>b>c
		else printf("%d", c); a>c>b
	}
	else printf("%d", a); c>a>b
}
else{
if (a < c) c>a,b
{
	if (b < c) printf("%d", b); c>b>a
	else printf("%d", c); b>c>a
}
else printf("%d", a); c>a>b
}
*/
	