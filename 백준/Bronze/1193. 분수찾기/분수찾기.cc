#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;
#pragma warning (disable:4996)

int main() {
    int X;
    scanf("%d", &X);
    int check = 1;
    int idx;
    for (int i = 0; true; i++) {
        check += i;
        if (check > X) {
            idx = i + 1;
            check -= i;
            break;
        }
    }
    if (idx == 1) {
        printf("1/1");
    }
    else {
        int tmp;
        tmp = idx;
        idx--;
        while (check != X) {
            idx--;
            check++;
        }
        (tmp % 2 == 0) ? printf("%d/%d", idx, tmp - idx) : printf("%d/%d", tmp - idx, idx);
    }
}