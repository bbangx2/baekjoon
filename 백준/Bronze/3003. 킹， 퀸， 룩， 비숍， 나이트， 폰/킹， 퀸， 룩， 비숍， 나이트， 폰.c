#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int king = 1, queen = 1, look = 2, bishop = 2, knight = 2, phone = 8;
    int k, q, l, b, kn, p;
    scanf("%d %d %d %d %d %d", &k, &q, &l, &b, &kn, &p);
    printf("%d %d %d %d %d %d", king - k, queen - q, look - l, bishop - b, knight - kn, phone - p);
    return 0;
}
