#include <cstdio>
int main()
{
	int col, row;
	char c;
	scanf("%d %c", &col, &c);

	// ��һ�����
	for (int i = 0; i < col; i++)
	{
		printf("%c", c);
	}

	printf("\n");

	if (col % 2 == 0)
		row = col / 2; // Ϊż��ʱ��ȡһ��
	else
		row = col / 2 + 1; // Ϊ����ʱ������ȡ������Ϊ����2�����0.5

	for (int i = 2; i < row; i++)
	{
		printf("%c", c);
		for (int j = 2; j < col; j++)
		{
			printf(" ");
		}
		printf("%c\n", c);
	}

	// ��ĩ�����
	for (int i = 0; i < col; i++)
	{
		printf("%c", c);
	}
}