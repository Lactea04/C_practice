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

	int result1 = num1 != num2; // 참이면 1 거짓이면 0 출력 !=: 좌변과 우변이 다른가? >>> 참이므로 1 출력
	printf("result: %d\n", result1);
	int result2 = num1 && num2, result3 = num1 || num2, result4 = !num1;
	printf("%d\n", result2), printf("%d\n", result3), printf("%d\n", result4);
	return 0;
}