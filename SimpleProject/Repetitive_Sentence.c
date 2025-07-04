#include <stdio.h>

int test(void)
{
	int num = 0;

	while (num < 5)
	{
		printf("Hello world! %d \n", num);
		num++;
	}
	return 0;
}
int time_practice(void)
{
	int dan = 0, num = 1;
	printf("몇 단?");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%d x %d = %d \n", dan, num, dan * num);
		num++;
	}
	return 0;
}
int nest_while(void)
{
	int cur = 2;
	int is = 0;
	while (cur < 10)
	{
		is = 1;
		while (is < 10)
		{
			printf("%d x %d = %d \n", cur, is, cur * is);
			is++;
		}
		cur++;
	}
	return 0;
}
int repeat_integer(void)
{
	int total = 0, num = 0;
	do
	{
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	} while (num != 0);
	printf("%d \n", total);
	return 0;
}
int practice_for(void)
{
	int total = 0;
	int i, num;
	printf("0부터 num까지의 덧셈, nun은?");
	scanf_s("%d", &num);

	for (i = 0; i < num + 1; i++)
		total += i;

	printf("0부터 %d까지의 덧셈 결과: %d \n", num, total);
	return 0;
}
int nest_for(void)
{
	int cur, is;

	for (cur = 2; cur < 10; cur++) 
	{
		for (is = 1; is < 10; is++)
			printf("%d x %d = %d \n", cur, is, cur * is);
		printf("\n");
	}
	return 0;
}

int main(void)
{
	nest_for();
}