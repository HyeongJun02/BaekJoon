#pragma warning (disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN -999
#define MAX 999

int main() {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    int res_x, res_y;

    for (int x = MIN; x <= MAX; x++) {
        for (int y = MIN; y <= MAX; y++) {
            if ((x * a + y * b) == c) {
                if ((x * d + y * e) == f) {
                    res_x = x;
                    res_y = y;
                }
                else continue;
            }
            else continue;
        }
    }

    printf("%d %d\n", res_x, res_y);

    return 0;
}
