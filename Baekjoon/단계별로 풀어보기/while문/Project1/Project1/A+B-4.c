#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int A, B;

	while (scanf(" %d %d", &A, &B) != EOF) { // EOF�� end of file �� ����. ������ ���� ���� ������ ��ȯ�ϸ� �� ���� -1 �̴�. ������ ���â���� ctrl+z�� �߻� ����
		printf("%d\n", A + B);

	}
	return 0;
}