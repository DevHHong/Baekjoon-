#include<iostream>
#include<stdio.h>
using namespace std;

// call by value : ���� ����
// call by reference : ����

void main()
{
	float average = 0, best = 0;

	int num;
	cin >> num;
	int* arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
		if (best < arr[i])
			best = arr[i];
	}
	for (int i = 0; i < num; i++)
	{
		average += ((arr[i] / best) * 100);
	}
	cout << fixed;
	cout.precision(2);
	cout << average / num << endl;

	//fixed -> �Ҽ���ǥ������
	//cout.precision(i) -> i��°������ǥ������ 
}
