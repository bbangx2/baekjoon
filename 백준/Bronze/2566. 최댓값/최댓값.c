#define _CRT_SECURE_NO_WARNINGS

#if 1

#include <stdio.h>

int main(void)
{
	int array[9][9];

	for (int i = 0; i < 9;i++)
	{
		for (int j = 0; j < 9;j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	int max = -1;
	int i_index = 0, j_index = 0;

	for (int i = 0; i < 9;i++)
	{
		for (int j = 0; j < 9;j++)
		{
			if (max < array[i][j])
			{
				max = array[i][j];
				i_index = i + 1;
				j_index = j + 1;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d\n", i_index, j_index);

}

#endif