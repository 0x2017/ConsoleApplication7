#include <stdio.h>

int main()
{

	int x, y;

	printf("�� ������ �Է��ϼ��� : ");
	scanf_s("%d %d", &x, &y);
	printf("%d/%d �� �� : %d\n", x, y, x / y);
	printf("%d/%d �� ������ : %d\n", x, y, x%y);

	return 0;

}