#include <stdio.h>


int Size(void)
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("������ ch�� ũ��: %d \n", sizeof(ch));
	printf("������ inum�� ũ��: %d \n", sizeof(inum));
	printf("������ dnum�� ũ��: %d \n", sizeof(dnum));

	printf("char�� ũ��: %d \n", sizeof(char));
	printf("int�� ũ��: %d \n", sizeof(int));
	printf("long�� ũ��: %d \n", sizeof(long));
	printf("long long�� ũ��: %d \n", sizeof(long long));
	printf("float�� ũ��: %d \n", sizeof(float));
	printf("double�� ũ��: %d \n", sizeof(double));
	return 0;
}
int num_Size(void)
{
	char num1 = 1, num2 = 2, result1 = 0;
	short num3 = 300, num4 = 400, result2 = 0;

	printf("size of num1 & num2: %d, %d \n", sizeof(num1), sizeof(num2));
	printf("size of num3 & num4: %d, %d \n", sizeof(num3), sizeof(num4));
	printf("size of char add: %d \n", sizeof(num1 + num2));
	printf("size of short add: %d \n", sizeof(num3 + num4));
	
	result1 = num1 + num2;
	result2 = num3 + num4;
	printf("size of result1 & result2: %d, %d \n", sizeof(result1), sizeof(result2));
}
int circle(void)
{
	double rad;
	double area;
	printf("���� ������ �Է�: ");
	scanf_s("%lf", &rad);

	area = rad*rad*3.1415;
	printf("���� ����: %f \n", area);
	return 0;
	// unsigned�� �̿��Ͽ� ���� ���� ����(long long������)�� 2�� ���̱� ����

}
int ASCII(void)
{
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);
	return 0;
}
int Float(void)
{
	float num1 = 5.789f; // 5.789�� double�� ����� �ν�, ���� ���̻� f�� �������ν� ����� �ڷ��� ���� (���⼱ float����)
	float num2 = 3.24F + 5.12F;
	return 0;
}
int division(void)
{
	int num1 = 3, num2 = 4;
	double divResult;
	divResult = num1 / num2;
	printf("The result of division is: %f \n", divResult);
	return 0;
}

int main(void)
{
	division();
}