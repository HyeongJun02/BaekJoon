#pragma warning (disable:4996)

#include <stdio.h>
#include <stdlib.h>

typedef struct hotel_case {
    int H;
    int W;
    int N;
};

int main()
{
    int T;
    scanf("%d", &T);
    int* H, * W, * N;
    H = (int*)malloc(sizeof(int) * T);
    W = (int*)malloc(sizeof(int) * T);
    N = (int*)malloc(sizeof(int) * T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &H[i]);
        scanf("%d", &W[i]);
        scanf("%d", &N[i]);

        int first = (N[i] % H[i] == 0)
            ? H[i]
            : N[i] % H[i];
        //printf("TESTCASE: %d\n", (N[i] % H[i]));
        int last = (N[i] % H[i] == 0)
            ? (N[i] / H[i])
            : (N[i] / H[i] + 1);

        printf("%d", first);
        if (last < 10) {
            printf("0");
        }
        printf("%d\n", last);
    }
}