#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a[1001], b[2002];
	int num;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%s", a);

		int j = 0;
		while (a[j] != '\0') // 문자열 길이 구하기
		{
			j++;
		}

		b[2 * i] = a[0];     
		b[2 * i + 1] = a[j - 1]; 
	}

	for (int k = 0; k < 2 * num; k += 2)
	{
		printf("%c%c\n", b[k], b[k + 1]);
	}

	return 0;
}
