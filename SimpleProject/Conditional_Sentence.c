#include <stdio.h>

int Condition_test(void)
{
	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("입력 값은 0보다 작다. \n");
	if (num > 0)
		printf("입력 값은 0보다 크다. \n");
	if (num == 0)
		printf("입력 값은 0이다. \n");


	return 0;
}
int Calculator(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈(a-b) 3.곱셈 4.나눗셈 (a/b) (ex: 1 입력시 덧셈 실행) \n");
	printf("사용할 기능 선택:");
	scanf_s("%d", &opt);
	printf("입력할 두 실수(a, b) 입력 (ex: 3, 6.2):");
	scanf_s("%lf, %lf", &num1, &num2);

	if (opt == 1)
	{
		result = num1 + num2;
	}
	if (opt == 2)
	{
		result = num1 - num2;
	}
	if (opt == 3)
	{
		result = num1*num2;
	}
	if (opt == 4)
	{
		result = num1/num2;
	}
	printf("결과값: %f \n", result);
	return 0;
}
int Else_test(void)
{
	int num;
	printf("정수 입력:");
	scanf_s("%d", &num);
	
	if (num < 0)
		printf("입력 값은 0보다 작다. \n");
	else
		printf("입력 값은 0보다 작지않다. \n");
	return 0;
}
int abs(void)
{
	int num, abs;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("절댓값: %d \n", abs);
	return 0;
}
int loop(void)
{
	int sum = 0, num = 0;

	while (1)
	{
		sum += num;
		if (sum > 5000)
			break;
		num++;
	}
	printf("sum: %d \n", sum);
	printf("num: %d \n", num);
	return 0;
}
int Continue(void)
{
	int num;
	printf("Start! ");

	for (num = 1; num < 20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue;
		printf("%d ", num);
	}
	printf("end \n");
	return 0;
}
int Switch(void)
{
	char sel;
	printf("M 오전, A 오후, E 저녁 \n");
	printf("입력: ");
	scanf_s("%c", &sel);

	switch (sel)
	{
	case 'M': case 'm':
		printf("Morning \n");
		break;
	case 'A': case 'a':
		printf("Afternoon \n");
		break;
	case 'E': case 'e':
		printf("Evening \n");
	}
	return 0;
}
int main(void)
{
	Switch();
}