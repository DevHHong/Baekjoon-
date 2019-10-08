#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num = 0, total = 0;
	int word[1000];

	string k;

	cin >> k;

	for (int j = 0; j < k.size(); j++)
	{
		if (k[j] == 'O')
		{
			num++;
			total += num;
		}
		else if (k[j] == 'X')
		{
			num = 0;
			total += num;
		}
	}
	cout << total;


}
