#include <stdio.h>

int main(void)
{
	int X, N, a, b;
	int total = 0;

	scanf("%d", &X);
	scanf("%d", &N);

	for (int i = 0; i < N;i++)
	{
		scanf("%d %d", &a, &b);
		total += a * b;
	}
	
	if (X == total)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No");
	}

	return 0;
}