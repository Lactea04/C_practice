int main4(void)
{
	int num1 = 20;
	int num2 = 40;

	printf("num1: %d\n", num1);
	printf("num1++: %d\n", num1++);
	printf("num1: %d\n", num1);

	printf("num2: %d\n", num2);
	printf("++num2: %d\n", ++num2);
	printf("num2: %d\n", num2);

	int result1 = num1 != num2; // ���̸� 1 �����̸� 0 ��� !=: �º��� �캯�� �ٸ���? >>> ���̹Ƿ� 1 ���
	printf("result: %d\n", result1);
	int result2 = num1 && num2, result3 = num1 || num2, result4 = !num1;
	printf("%d\n", result2), printf("%d\n", result3), printf("%d\n", result4);
	return 0;
}