#include <iostream>
using namespace std;

void cycle(int baseNum, int num, int ten, int one)
{
	int cnt = 1;
	while (num != baseNum)
	{
		if (ten + one < 10)
		{
			num = one * 10 + ten + one;
		}
		else if (ten + one >= 10)
		{
			num = one * 10 + (ten + one) % 10;
		}

		ten = num / 10;
		one = num % 10;
		cnt++;
	}
	cout << cnt;
}
int main()
{
	int num, baseNum, ten, one;
	cin >> baseNum;

	num = baseNum;
	ten = baseNum / 10;//10의 자리
	one = baseNum % 10;//1의 자리
	if (ten + one < 10)
	{
		num = one * 10 + ten + one;
	}
	else if (ten + one >= 10)
	{
		num = one * 10 + (ten + one) % 10;
	}
	ten = num / 10;
	one = num % 10;

	cycle(baseNum, num, ten, one);
}


