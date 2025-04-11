#include <stdio.h>

int main(void)
{
	int a, b, i = 0;
	int array[1000001];

	while (1)
	{
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
		{
			break;
		}
		array[i] = a + b;
		i++;
	}

	for (int j = 0; j < i; j++)
	{
		printf("%d\n", array[j]);
	}

	return 0;
	
}