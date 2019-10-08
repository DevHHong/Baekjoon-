#include<stdio.h>
void quickSort(int*, int array_size);
void q_sort(int*, int left, int right);

void quickSort(int* numbers, int array_size)
{
	q_sort(numbers, 0, array_size - 1);
}

void q_sort(int* numbers, int left, int right)
{
	int pivot, Left_hold, Right_hold;
	Left_hold = left;
	Right_hold = right;
	pivot = numbers[left];    // 0번째 원소를 피봇으로 선택
	while (left < right)
	{
		//값이 선택한 피봇과 같거나 크다면, 이동할 필요가 없다.
		while ((numbers[right] >= pivot) && (left < right))
			right--;

		//그렇지 않고 값이 피봇보다 작다면, 피봇의 위치에 현재 값을 넣는다.
		if (left != right)
		{
			numbers[left] = numbers[right];
		}

		// 왼쪽부터 현재 위치까지 값을 읽어들이면서 피봇보다 큰 값이 있다면, 값을 이동.
		while ((numbers[left] <= pivot) && (left < right))
			left++;
		if (left != right)
		{
			numbers[right] = numbers[left];
			right--;
		}
	}

	// 모든 스캔이 끝났다면, 피봇값을 현재 위치에 입력한다.
	// 이제 피봇을 기준으로 왼쪽에는 피봇보다 작거나 같은 값만 남은 상태다.
	numbers[left] = pivot;
	pivot = left;
	left = Left_hold;
	right = Right_hold;

	// 재귀호출을 수행.
	if (left < pivot)
		q_sort(numbers, left, pivot - 1);

	if (right > pivot)
		q_sort(numbers, pivot + 1, right);
}

int main(void)
{
	int data[] = { 3,7,8,5,2,1,9,5,4 };
	quickSort(data, 9);
	for (int i = 0; i < 9; i++)
	{
		printf("%d\n", data[i]);
	}
	return 0;
}
