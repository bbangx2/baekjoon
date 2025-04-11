#include <stdio.h>

int main(void)
{
	int T, a, b;
	scanf("%d", &T);
	int array[1000001];

	for (int i = 0;i < T;i++)
	{
		scanf("%d %d", &a, &b);
		array[i] = a + b;
	}
	for (int i = 0;i < T;i++)
	{
		printf("%d\n", array[i]);
	}

	return 0;
	
}