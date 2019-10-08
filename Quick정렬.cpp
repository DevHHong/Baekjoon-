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
	pivot = numbers[left];    // 0��° ���Ҹ� �Ǻ����� ����
	while (left < right)
	{
		//���� ������ �Ǻ��� ���ų� ũ�ٸ�, �̵��� �ʿ䰡 ����.
		while ((numbers[right] >= pivot) && (left < right))
			right--;

		//�׷��� �ʰ� ���� �Ǻ����� �۴ٸ�, �Ǻ��� ��ġ�� ���� ���� �ִ´�.
		if (left != right)
		{
			numbers[left] = numbers[right];
		}

		// ���ʺ��� ���� ��ġ���� ���� �о���̸鼭 �Ǻ����� ū ���� �ִٸ�, ���� �̵�.
		while ((numbers[left] <= pivot) && (left < right))
			left++;
		if (left != right)
		{
			numbers[right] = numbers[left];
			right--;
		}
	}

	// ��� ��ĵ�� �����ٸ�, �Ǻ����� ���� ��ġ�� �Է��Ѵ�.
	// ���� �Ǻ��� �������� ���ʿ��� �Ǻ����� �۰ų� ���� ���� ���� ���´�.
	numbers[left] = pivot;
	pivot = left;
	left = Left_hold;
	right = Right_hold;

	// ���ȣ���� ����.
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
