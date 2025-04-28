#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char input[101];  // 한 줄씩 읽을 버퍼

    while (fgets(input, sizeof(input), stdin) != NULL)
    {
        printf("%s", input);
    }

    return 0;
}
