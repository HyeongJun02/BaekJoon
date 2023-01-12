#include <stdio.h>

#pragma warning (disable:4996)

void output_move(int s, int e) {
    printf("%d %d\n", s, e);
}
void hanoi(int n, int s, int e) {
    if (n == 0) {
        return;
    }
    hanoi(n - 1, s, 6 - s - e);
    output_move(s, e);
    hanoi(n - 1, 6 - s - e, e);
}
int main() {
    int N;
    int total = 1;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        total *= 2;
    }

    printf("%d\n", total - 1);
    hanoi(N, 1, 3);
}

