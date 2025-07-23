#include <stdio.h>

void size_measurement(void)
{
	int arr1[3][4];
	int arr2[9][10];
	printf("세로 3 가로 4: %d \n", sizeof(arr1));
	printf("세로 9 가로 10: %d \n", sizeof(arr2));
}

void villa(void)
{
	int villa_[4][2];
	int popu, i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d층 %d호 인구수:  ", i+1, j+1);
			scanf_s("%d", &villa_[i][j]);
		}
	}

	for (i = 0; i < 4; i++)
	{
		popu = 0;
		popu += villa_[i][0];
		popu += villa_[i][1];
		printf("%d층 인구수: %d \n", i+1, popu);
	}
}

void second_dimension_arrangement(void)
{
	int i, j;

	int arr1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int arr2[3][3] = {
		{1},
		{4,5},
		{7,8,9}
	};

	int arr3[3][3] = { 1,2,3,4,5,6,7 };

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d", arr1[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d", arr2[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d", arr3[i][j]);
		printf("\n");
	}
	printf("\n");

}
void third_dimension_arrangement(void)
{
	int mean = 0, i, j;
	int record[3][3][2] = {
		{
			{70, 80},    // A 학급 학생 1의 성적
			{94, 90},    // A 학급 학생 2의 성적
			{70, 85}     // A 학급 학생 3의 성적
		},
		{
			{83, 90},    // B 학급 학생 1의 성적
			{95, 60},    // B 학급 학생 2의 성적
			{90, 82}     // B 학급 학생 3의 성적
		},
		{
			{98, 89},    // C 학급 학생 1의 성적
			{99, 94},    // C 학급 학생 2의 성적
			{91, 87}     // C 학급 학생 3의 성적
		}
	};

	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[0][i][j];
	printf("A 학급 전체 평균: %g \n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[1][i][j];
	printf("B 학급 전체 평균: %g \n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[2][i][j];
	printf("C 학급 전체 평균: %g \n", (double)mean / 6);
}



int main(void)
{
	third_dimension_arrangement();
	return 0;
}