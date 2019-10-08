#include <iostream>
#include <string>
using namespace std;
int main()
{
	int data[8];
	int count = 0;
	int bcount = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> data[i];

		if (data[i] == i + 1)
		{
			count++;
		}
		else if (data[i] == 8 - i)
		{
			bcount++;
		}
	}

	if (count == 8)
	{
		cout << "ascending";
	}
	else if (bcount == 8)
	{
		cout << "descending";
	}
	else
	{
		cout << "mixed";
	}

}