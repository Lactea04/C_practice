#include <stdio.h>

void test1(void)
{
	int arr2d[3][3];
	printf("%d \n", arr2d);
	printf("%d \n", arr2d[0]);
	printf("%d \n\n", &arr2d[0][0]);

	printf("%d \n", arr2d[1]);
	printf("%d \n\n", &arr2d[1][0]);

	printf("%d \n", arr2d[2]);
	printf("%d \n", &arr2d[2][0]);

	printf("sizeof(arr2d): %d \n", sizeof(arr2d));
	printf("sizeof(arr2d[0]): %d \n", sizeof(arr2d[0]));
	printf("sizeof(arr2d[1]): %d \n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]): %d \n", sizeof(arr2d[2]));
}

void test2(void)
{
	int arr1[2][2] = {
		{1, 2}, {3, 4}
	};
	int arr2[3][2] = {
		{1, 2}, {3, 4}, {5, 6}
	};
	int arr3[4][2] = {
		{1, 2}, {3, 4}, {5, 6}, {7, 8}
	};

	int (*ptr)[2];
	int i;

	ptr = arr1;
	printf("** Show 2,2 arr1 **\n");
	for (i = 0; i < 2; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);
	ptr = arr2;
	printf("** Show 3,2 arr2 **\n");
	for (i = 0; i < 3; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);
	ptr = arr3;
	printf("** Show 4,2 arr3 **\n");
	for (i = 0; i < 4; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);

}

void test3(void)
{
	int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
	int arr2d[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int i, j;

	int* whoA[4] = { &num1, &num2, &num3, &num4 }; // Pointer arrangement (arrangement which consists in pointer variations)
	int (*whoB)[4] = arr2d; // Arrangement pointer (pointer variations which can indicate arrangement)

	printf("%d %d %d %d \n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", whoB[i][j]);
		printf("\n");
	}
	return 0;
}



int main(void)
{
	test3();
	return 0;
}