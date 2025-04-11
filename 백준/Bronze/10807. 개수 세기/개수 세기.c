#include <stdio.h>

int main(void)
{
	int N, v, res = 0;
	scanf("%d", &N);
	int ar[1000] = { 0 };

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &ar[i]);
	}
	scanf("%d", &v);

	
	for (int i = 0; i < N;i++)
	{
		if (ar[i] == v)
		{
			res++;
		}
	}

	printf("%d", res);
	return 0;
	
}