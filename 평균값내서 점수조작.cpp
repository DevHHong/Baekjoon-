#include<iostream>
#include<stdio.h>
using namespace std;

// call by value : 값만 전달
// call by reference : 참조

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

	//fixed -> 소수점표시해줌
	//cout.precision(i) -> i번째까지만표시해줌 
}
