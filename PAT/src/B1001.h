#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main()
{
	int n, step = 0;
	scanf("%d", &n);
	while (n != 1)
	{
		if (n % 2 == 0)
			n = n / 2;
		else
			n = (3 * n + 1) / 2;
		step++;
	}
	printf("%d\n", step);
}