#define _CRT_SECURE_NO_WARNINGS

#if 1


#include <stdio.h>

int main(void)
{
	int N, M;
	int A[100][100];
	int B[100][100];

	scanf("%d %d", &N, &M);
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0;j < M;j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0;j < M;j++)
		{
			scanf("%d", &B[i][j]);
		}
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0;j < M;j++)
		{
			printf("%d ", A[i][j] + B[i][j]);
		}
		printf("\n");
	}
	
	

}




#endif