#include <cstdio>
int main()
{
	int col, row;
	char c;
	scanf("%d %c", &col, &c);

	// 第一行输出
	for (int i = 0; i < col; i++)
	{
		printf("%c", c);
	}

	printf("\n");

	if (col % 2 == 0)
		row = col / 2; // 为偶数时，取一半
	else
		row = col / 2 + 1; // 为基数时，向上取整，因为除以2多出了0.5

	for (int i = 2; i < row; i++)
	{
		printf("%c", c);
		for (int j = 2; j < col; j++)
		{
			printf(" ");
		}
		printf("%c\n", c);
	}

	// 第末行输出
	for (int i = 0; i < col; i++)
	{
		printf("%c", c);
	}
}