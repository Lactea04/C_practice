#include <stdio.h>

int Add(int num1, int num2)  //�������� (O), ��ȯ ��(O)
{
	return num1 + num2;
}

void ShowAddResult(int num) //�������� (O), ��ȯ ��(X)
{
	printf("���� ��� ���: %d \n", num);
}

int ReadNum(void) //�������� (X), ��ȯ ��(O)
{
	int num;
	scanf_s("%d", &num);
	return num;
}

void HowToUseThisProg(void) //�������� (X), ��ȯ ��(X)
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("�� ���� ������ �Է��ϼ���. \n");
}

int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

int test(void)
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d�� %d�� ������ ū ����: %d \n",
		num1, num2, AbsoCompare(num1, num2));
	return 0;
}

int AbsoCompare(int num1, int num2)
{
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1;
	else
		return num2;
}

int GetAbsoValue(int num)
{
	if (num < 0)
		return num * (-1);
	else
		return num;
}


int main(void)
{
	/*int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	*/
	test();
	return 0;
}