#include<stdio.h>

#define Num 10
int main()
{
	int a, b, m, n;
	printf("Insert two Number:");
	scanf("%d %d", &a, &b);

	m = a;
	n = b;
	while (m != n)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	printf("최대공약수 = %d", m);
}
