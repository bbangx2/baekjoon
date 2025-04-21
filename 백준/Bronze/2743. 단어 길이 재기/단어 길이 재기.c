#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	char a[101];
	int digit;

	scanf("%s", &a);

	int i = 0;
	while (a[i] != '\0')
	{
		i++;
	}

	printf("%d", i);
	

	return 0;
}