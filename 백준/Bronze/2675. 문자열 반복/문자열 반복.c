#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T;
	int R[1000];
	char S[1000][21];

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d", &R[i]);
		scanf("%s", &S[i]);
	}



	for (int i = 0; i < T; i++)
	{
		int size = 0;
		while (1)
		{
			if (S[i][size] == '\0') break;
			size++;
		}
		for (int j = 0; j < size;j++)
		{
			for (int k = 0; k < R[i];k++)
			{
				printf("%c", S[i][j]);
			}
		}

		printf("\n");
	}
}