#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);

	int c, d;
	c = (a / 100) + ((a % 100) / 10) * 10 + (a % 10) * 100;
	d = (b / 100) + ((b % 100) / 10) * 10 + (b % 10) * 100;
	printf("%d", (c > d) ? c : d);

	return 0;
}