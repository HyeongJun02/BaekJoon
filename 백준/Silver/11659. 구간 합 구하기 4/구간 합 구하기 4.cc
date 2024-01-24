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

int main() {
    vector<int>v;
    int N, M;
    scanf("%d %d", &N, &M);
    v.push_back(0);
    for (int i = 1; i < N + 1; i++) {
        int tmp;
        scanf("%d", &tmp);
        v.push_back(v[i - 1] + tmp);
    }
    for (int a = 0; a < M; a++) {
        int i, j;
        scanf("%d %d", &i, &j);
        printf("%d\n", v[j] - v[i - 1]);
    }
}