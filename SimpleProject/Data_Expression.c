#include <stdio.h>
//Ch.04 참고하기 &, |, ^, ~, <<, >>
int AND(void)
{
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 & num2; //num1과 num2의 비트단위 &연산
	printf("AND 연산의 결과: %d \n", num3);
	return 0;
}
int OR(void)
{
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 | num2;
	printf("OR 연산의 결과: %d \n", num3);
	return 0;
}
int XOR(void)
{
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 ^ num2;
	printf("XOR 연산의 결과: %d \n", num3);
	return 0;
}
int NOT(void)
{
	int num1 = 15;
	int num2 = ~num1;
	printf("NOT 연산의 결과: %d \n", num2);
	return 0;
}
int R_Shift(void)
{
	int num = 15;
	int result1 = num << 1;
	int result2 = num << 2;
	int result3 = num << 3;

	printf("1칸 이동 결과: %d \n", result1);
	printf("2칸 이동 결과: %d \n", result2);
	printf("3칸 이동 결과: %d \n", result3);
	return 0;
}
int L_Shift(void)
{
	int num = -16;
	int result1 = num >> 1;
	int result2 = num >> 2;
	int result3 = num >> 3;

	printf("1칸 이동 결과: %d \n", result1);
	printf("2칸 이동 결과: %d \n", result2);
	printf("3칸 이동 결과: %d \n", result3);
	return 0;
}
int main(void)
{
	/*int num1 = 0xA7, num2 = 0x43; //0x: 16진수 표현
	int num3 = 032, num4 = 024; //0: 8진수표현

	printf("0xA7의 10진수 정수 값: %d \n", num1);
	printf("0x43의 10진수 정수 값: %d \n", num2);
	printf("032의 10진수 정수 값: %d \n", num3);
	printf("024의 10진수 정수 값: %d \n", num4);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d * %d = %d", num3, num4, num3 * num4);
	return 0;
	*/

	//실수의 표현: +-pow((1.m)*2,e-127)
	int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
		num += 0.1; //0.1 100번 더하기

	printf("The result of adding 0.1 for 100 times: %f \n", num); // result: 10.000002 => 실수 연산은 오차발생
	AND();
	OR();
	XOR();
	NOT();
	R_Shift();
	L_Shift();
	return 0;

}
