#include <stdio.h>
int main3(void)
{
	int num1, num2, num3;
	int result;
	printf("정수 3개를 입력해주세요. (ex: 3 4 5): ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d\n", num1, num2, num3, result);
	return 0;
}