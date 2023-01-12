#pragma warning (disable:4996)

#include <stdio.h>

int main()
{
    int A, B;

    scanf("%d %d", &A, &B);

    int r3, r4, r5, r6;
    r3 = A * (B % 10);
    r4 = A * (B % 100 - B % 10);
    r5 = A * (B - B % 100);
    r6 = r3 + r4 + r5;

    printf("%d\n", r3 / 1);
    printf("%d\n", r4 / 10);
    printf("%d\n", r5 / 100);
    printf("%d\n", r6);
}