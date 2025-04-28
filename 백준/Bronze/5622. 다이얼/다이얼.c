#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char input[16];
	scanf("%s", input);

	int ttime = 0;
	int i = 0;
	int cti = 0;

	while (1)
	{
		if (input[i] == '\0') 
		{
			break;
		}
		cti = input[i];
		switch (cti) {
		case 65: ttime += 3; break;
		case 66: ttime += 3; break;
		case 67: ttime += 3; break;

		case 68: ttime += 4; break;
		case 69: ttime += 4; break;
		case 70: ttime += 4; break;

		case 71: ttime += 5; break;
		case 72: ttime += 5; break;
		case 73: ttime += 5; break;

		case 74: ttime += 6; break;
		case 75: ttime += 6; break;
		case 76: ttime += 6; break;

		case 77: ttime += 7; break;
		case 78: ttime += 7; break;
		case 79: ttime += 7; break;

		case 80: ttime += 8; break;
		case 81: ttime += 8; break;
		case 82: ttime += 8; break;
		case 83: ttime += 8; break;

		case 84: ttime += 9; break;
		case 85: ttime += 9; break;
		case 86: ttime += 9; break;

		case 87: ttime += 10; break;
		case 88: ttime += 10; break;
		case 89: ttime += 10; break;
		case 90: ttime += 10; break;
		}
		i++;
	}
	printf("%d", ttime);


	return 0;
}