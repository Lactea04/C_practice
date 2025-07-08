#include <stdio.h>

int Add(int num1, int num2)  //인자전달 (O), 반환 값(O)
{
	return num1 + num2;
}

void ShowAddResult(int num) //인자전달 (O), 반환 값(X)
{
	printf("덧셈 결과 출력: %d \n", num);
}

int ReadNum(void) //인자전달 (X), 반환 값(O)
{
	int num;
	scanf_s("%d", &num);
	return num;
}

void HowToUseThisProg(void) //인자전달 (X), 반환 값(X)
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("두 개의 정수를 입력하세요. \n");
}

int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

int test(void)
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d와 %d중 절댓값이 큰 정수: %d \n",
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