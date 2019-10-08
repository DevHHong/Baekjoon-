#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;

	if (n == 1)
		cout << 1;

	else
	{
		int sum = 1;
		int round = 6;
		int result = 2;

		while (sum + round < n)
		{
			sum += round;
			round += 6;
			result++;
		}
		cout << result;
	}

}
