#include <stdio.h>


void test1(void)
{
	double num = 3.14;
	double *ptr = &num;
	double** dptr = &ptr;
	double* ptr2;

	printf("%9p %9p \n", ptr, *dptr);
	printf("%9g %9g \n", num, **dptr);
	ptr2 = *dptr;  //ptr2 = ptr
	*ptr2 = 10.99;
	printf("%9g, %9g \n", num, **dptr);
}

void SwapIntPtr(int *p1, int*p2)
{
	int * temp=p1;
	p1 = p2;
	p2 = temp;
}

void test2(void)
{
	int num1 = 10, num2 = 20;
	int *ptr1, *ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

	SwapIntPtr(ptr1, ptr2);
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
}

void SwapIntPtr2(int** dp1, int** dp2)
{
	int* temp = *dp1;
	*dp1 = *dp2;
	*dp2 = temp;
}

void test3(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

	SwapIntPtr2(ptr1, ptr2);
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
}

void test4(void)
{
	int num = 10;
	int* ptr = &num;
	int** dptr = &ptr;
	int*** tptr = &dptr;

	printf("%d, %d", **dptr, ***tptr);
}

int main(void)
{
	test4();
	return 0;
}