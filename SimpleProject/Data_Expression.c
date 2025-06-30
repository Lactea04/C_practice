#include <stdio.h>
//Ch.04 �����ϱ� &, |, ^, ~, <<, >>
int AND(void)
{
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 & num2; //num1�� num2�� ��Ʈ���� &����
	printf("AND ������ ���: %d \n", num3);
	return 0;
}
int OR(void)
{
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 | num2;
	printf("OR ������ ���: %d \n", num3);
	return 0;
}
int XOR(void)
{
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 ^ num2;
	printf("XOR ������ ���: %d \n", num3);
	return 0;
}
int NOT(void)
{
	int num1 = 15;
	int num2 = ~num1;
	printf("NOT ������ ���: %d \n", num2);
	return 0;
}
int R_Shift(void)
{
	int num = 15;
	int result1 = num << 1;
	int result2 = num << 2;
	int result3 = num << 3;

	printf("1ĭ �̵� ���: %d \n", result1);
	printf("2ĭ �̵� ���: %d \n", result2);
	printf("3ĭ �̵� ���: %d \n", result3);
	return 0;
}
int L_Shift(void)
{
	int num = -16;
	int result1 = num >> 1;
	int result2 = num >> 2;
	int result3 = num >> 3;

	printf("1ĭ �̵� ���: %d \n", result1);
	printf("2ĭ �̵� ���: %d \n", result2);
	printf("3ĭ �̵� ���: %d \n", result3);
	return 0;
}
int main(void)
{
	/*int num1 = 0xA7, num2 = 0x43; //0x: 16���� ǥ��
	int num3 = 032, num4 = 024; //0: 8����ǥ��

	printf("0xA7�� 10���� ���� ��: %d \n", num1);
	printf("0x43�� 10���� ���� ��: %d \n", num2);
	printf("032�� 10���� ���� ��: %d \n", num3);
	printf("024�� 10���� ���� ��: %d \n", num4);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d * %d = %d", num3, num4, num3 * num4);
	return 0;
	*/

	//�Ǽ��� ǥ��: +-pow((1.m)*2,e-127)
	int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
		num += 0.1; //0.1 100�� ���ϱ�

	printf("The result of adding 0.1 for 100 times: %f \n", num); // result: 10.000002 => �Ǽ� ������ �����߻�
	AND();
	OR();
	XOR();
	NOT();
	R_Shift();
	L_Shift();
	return 0;

}
