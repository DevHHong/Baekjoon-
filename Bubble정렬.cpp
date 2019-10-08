#include<stdio.h>

void main(void)
{
	int arr[5] = { 6,4,7,9,1 };

	printf("========버블정렬 전 =======\n");
	for (int i = 0; i < 5; i++)
		printf("%3d", arr[i]);
	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("========버블정렬 후========\n");
	for (int i = 0; i < 5; i++)
		printf("%3d", arr[i]);
	printf("\n");
}