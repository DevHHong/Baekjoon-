#include<stdio.h>

#define MAX 5

int MinIndex;
int temp;

int arr[MAX] = { 5,39,2,44,23 };

void main(void)
{
	for (int i = 0; i < MAX - 1; i++)
	{
		MinIndex = i;
		for (int j = i; j < MAX; j++)
		{
			if (arr[MinIndex] > arr[j])
				MinIndex = j;
		}
		if (MinIndex != i)
		{
			temp = arr[MinIndex];
			arr[MinIndex] = arr[i];
			arr[i] = temp;
		}
	}
	for (int i = 0; i < MAX; i++)
	{
		printf("%d\n", arr[i]);
	}
}