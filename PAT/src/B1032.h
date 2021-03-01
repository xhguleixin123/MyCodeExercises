#include <iostream>

const int maxNo = 100010;
int schoolScore[maxNo] = { 0 };

int main()
{
	int n, schoolID, score;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &schoolID, &score);
		schoolScore[schoolID] += score;
	}

	int k = 1, Max = -1;
	// i是从1开始的，i <= n
	for (int i = 1; i <= n; i++)
	{
		if (schoolScore[i] > Max)
		{
			k = i;
			Max = schoolScore[i];
		}
	}
	printf("%d %d\n", k, Max);
}