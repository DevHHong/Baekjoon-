#include<iostream>
#include<malloc.h>
using namespace std;

void main(void)
{
	int arr[11] = { 0 };
	int insertNum = 0;
	int max = 0;
	int max_index = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "�� �Է� :   (0~9)";
		cin >> insertNum;
		arr[insertNum]++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = i;
			max_index = arr[i];
		}
	}

	cout << "���� �� : " << max << endl << endl;
	cout << "Ƚ�� :" << max_index;

}