#include <stdio.h>

void SimpleAdder(int n1, int n2)
{
	printf("%d + %d = %d \n", n1, n2, n1+n2);
}

void ShowString(char* str)
{
	printf("%s \n", str);
}

void Test1(void)
{
	char* str = "Function Pointer";
	int num1 = 10, num2 = 20;


	void (*fptr1)(int, int) = SimpleAdder;
	void (*fptr2)(char*) = ShowString;

	fptr1(num1, num2);
	fptr2(str);
}

void SoSimpleFunc(void)
{
	printf("I'm so simple");
}

void Test2(void)
{
	int num = 20;
	void* ptr;
	ptr = &num;
	printf("%p \n", ptr);

	ptr = SoSimpleFunc;
	printf("%p \n", ptr);
}

void ShowAllString(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s \n", argv[i]);
}

int main(void)
{
	char* str[3] = {
		"C Programming",
		"C++ Programing",
		"JAVA Programming"
	};
	ShowAllString(3, str);
	return 0;
}
