#include <stdio.h>

int Condition_test(void)
{
	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("�Է� ���� 0���� �۴�. \n");
	if (num > 0)
		printf("�Է� ���� 0���� ũ��. \n");
	if (num == 0)
		printf("�Է� ���� 0�̴�. \n");


	return 0;
}
int Calculator(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2.����(a-b) 3.���� 4.������ (a/b) (ex: 1 �Է½� ���� ����) \n");
	printf("����� ��� ����:");
	scanf_s("%d", &opt);
	printf("�Է��� �� �Ǽ�(a, b) �Է� (ex: 3, 6.2):");
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
	printf("�����: %f \n", result);
	return 0;
}
int Else_test(void)
{
	int num;
	printf("���� �Է�:");
	scanf_s("%d", &num);
	
	if (num < 0)
		printf("�Է� ���� 0���� �۴�. \n");
	else
		printf("�Է� ���� 0���� �����ʴ�. \n");
	return 0;
}
int abs(void)
{
	int num, abs;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("����: %d \n", abs);
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
	printf("M ����, A ����, E ���� \n");
	printf("�Է�: ");
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