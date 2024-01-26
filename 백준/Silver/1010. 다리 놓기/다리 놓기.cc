#pragma warning (disable:4996)
using namespace std;

#include <stdio.h>
#include <vector>
#include <algorithm>

void nl(int n) {
    for (int i = 0; i < n; i++) {
        printf("\n");
    }
}

vector<int>v;

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int N, M;
        scanf("%d %d", &N, &M);
        long long up = 1, down = 1;
        N = M - N;
        if (M - N < N) {
            N = M - N;
        }
        int tmp = N;
        for (int i = 0; i < tmp; i++) {
            up *= M;
            //printf("[%2d] M: %d, up: %lld\n", i, M, up);
            M--;
        }
        for (int i = 0; i < tmp; i++) {
            down *= N;
            //printf("[%2d] N: %d, down: %lld\n", i, N, down);
            N--;
        }
        printf("%lld\n", up / down);
    }
}