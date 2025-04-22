#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char S[101];
	scanf("%s", S);
	char ap[27] = { "abcdefghijklmnopqrstuvwxyz" };
	int a[101];
	for (int i = 0; i < 101; i++) {
		a[i] = -1;
	}

	int size = 0;
	while (1)
	{
		if (S[size] == '\0') break;
		size++;
	}
	for (int i = 0; i < size;i++)
	{
		for (int j = 0; j < 26;j++)
		{
			if (S[i] == ap[j])
			{
				if (a[j] == -1)
				{
					a[j] = i; 
					break;
				}
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", a[i]);
	}
}