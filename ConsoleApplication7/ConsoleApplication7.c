#include <stdio.h>

int main()
{

	int x, y;

	printf("두 정수를 입력하세요 : ");
	scanf_s("%d %d", &x, &y);
	printf("%d/%d 의 몫 : %d\n", x, y, x / y);
	printf("%d/%d 의 나머지 : %d\n", x, y, x%y);

	return 0;

}