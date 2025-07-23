#include <stdio.h>

void size_measurement(void)
{
	int arr1[3][4];
	int arr2[9][10];
	printf("���� 3 ���� 4: %d \n", sizeof(arr1));
	printf("���� 9 ���� 10: %d \n", sizeof(arr2));
}

void villa(void)
{
	int villa_[4][2];
	int popu, i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d�� %dȣ �α���:  ", i+1, j+1);
			scanf_s("%d", &villa_[i][j]);
		}
	}

	for (i = 0; i < 4; i++)
	{
		popu = 0;
		popu += villa_[i][0];
		popu += villa_[i][1];
		printf("%d�� �α���: %d \n", i+1, popu);
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
			{70, 80},    // A �б� �л� 1�� ����
			{94, 90},    // A �б� �л� 2�� ����
			{70, 85}     // A �б� �л� 3�� ����
		},
		{
			{83, 90},    // B �б� �л� 1�� ����
			{95, 60},    // B �б� �л� 2�� ����
			{90, 82}     // B �б� �л� 3�� ����
		},
		{
			{98, 89},    // C �б� �л� 1�� ����
			{99, 94},    // C �б� �л� 2�� ����
			{91, 87}     // C �б� �л� 3�� ����
		}
	};

	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[0][i][j];
	printf("A �б� ��ü ���: %g \n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[1][i][j];
	printf("B �б� ��ü ���: %g \n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[2][i][j];
	printf("C �б� ��ü ���: %g \n", (double)mean / 6);
}



int main(void)
{
	third_dimension_arrangement();
	return 0;
}