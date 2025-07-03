#include <stdio.h>

int exp(void)
{
	double d1 = 1.23e-3;
	double d2 = 1.23e-4;
	double d3 = 1.23e-5;
	double d4 = 1.23e-6;

	printf("%g \n", d1);
	printf("%g \n", d2);
	printf("%g \n", d3);
	printf("%g \n", d4);
	return 0;
}
int array(void)
{
	printf("%-8s %10s %6s \n", "김태균", "금융빅데이터학부", "1학년");
	return 0;
}

int float_exp(void)
{
	float num1 = 0.0;
	double num2 = 0.0;
	long double num3 = 0.0;
	printf("실수 입력1(e 표기법으로): ");
	scanf_s("%f", &num1);
	printf("입력된 실수: %f\n", num1);

	printf("실수 입력1(e 표기법으로): ");
	scanf_s("%lf", &num2);
	printf("입력된 실수: %lf\n", num2);

	printf("실수 입력1(e 표기법으로): ");
	scanf_s("%Lf", &num3);
	printf("입력된 실수: %Lf\n", num3);
	return 0;
}


int main(void)
{
	float_exp();
}