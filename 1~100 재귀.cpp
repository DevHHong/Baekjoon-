#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
using namespace std;


int sum(int n)
{
	if (n == 100)
		return 100;

	return n + sum(n + 1);
}
void main()
{

	

	cout << sum(1) << endl;

	system("pause");

}