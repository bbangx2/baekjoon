#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d\n", (b % 10) * a);
	printf("%d\n", (b % 100)/10 * a);
	printf("%d\n", (b / 100) * a);
	printf("%d\n", b * a);

}