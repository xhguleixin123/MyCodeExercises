#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>

const int maxn = 210;
int a[maxn];

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}

		int x;
		scanf("%d", &x);
		int k;
		for (k = 0; k < n; k++)
		{
			if (a[k] == x)
			{
				printf("%d\n", k);
				break;
			}
		}

		if (k == n)
		{
			printf("-1\n");
		}
	}
}