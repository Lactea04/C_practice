#include <stdio.h>


int Size(void)
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("변수의 ch의 크기: %d \n", sizeof(ch));
	printf("변수의 inum의 크기: %d \n", sizeof(inum));
	printf("변수의 dnum의 크기: %d \n", sizeof(dnum));

	printf("char의 크기: %d \n", sizeof(char));
	printf("int의 크기: %d \n", sizeof(int));
	printf("long의 크기: %d \n", sizeof(long));
	printf("long long의 크기: %d \n", sizeof(long long));
	printf("float의 크기: %d \n", sizeof(float));
	printf("double의 크기: %d \n", sizeof(double));
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
	printf("원의 반지름 입력: ");
	scanf_s("%lf", &rad);

	area = rad*rad*3.1415;
	printf("원의 넓이: %f \n", area);
	return 0;
	// unsigned를 이용하여 양의 정수 범위(long long까지만)로 2배 늘이기 가능

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
	float num1 = 5.789f; // 5.789는 double형 상수로 인식, 따라서 접미사 f를 붙임으로써 상수의 자료형 변경 (여기선 float으로)
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