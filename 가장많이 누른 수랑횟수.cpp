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
		cout << "값 입력 :   (0~9)";
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

	cout << "많이 한 : " << max << endl << endl;
	cout << "횟수 :" << max_index;

}