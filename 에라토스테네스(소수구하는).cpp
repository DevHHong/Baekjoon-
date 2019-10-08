#include<stdio.h>
#include<math.h>
#define Num 10
int main()
{
	int i, n, Limit;

	while (printf("data ?"), scanf("%d", &n) != EOF)
	{
		if (n >= 2)
		{
			Limit = (int)sqrt(n);
			for (i = Limit; i > 1; i--)
			{
				if (n%i == 0)
					break;
			}
			if (i == 1)
				printf("소수\n");
			else
				printf("소수아님\n");
		}
	}
}
