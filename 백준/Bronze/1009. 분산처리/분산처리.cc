#include <stdio.h>

#pragma warning (disable:4996)

int main() {
    int T, a, b, t;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &a, &b);
        b %= 4;
        b = b == 0 ? 4 : b;
        t = a % 10;
        while (--b) {
            t = t * a % 10;
        }
        printf("%d\n", t == 0 ? 10 : t);
    }
}