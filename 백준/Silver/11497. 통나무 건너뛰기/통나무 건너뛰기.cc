#pragma warning (disable:4996)
using namespace std;

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

int N;
int L[10000];

int solution() {
	sort(L, L + N);

	int result = L[1] - L[0];

    // 간접적으로 그리디 사용
	for (int i = 2; i < N; i += 2) {
		result = max(result, L[i] - L[i - 2]);
	}
	for (int i = 3; i < N; i += 2) {
		result = max(result, L[i] - L[i - 2]);
	}

    return result;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);

        for (int i = 0; i < N; i++) {
            scanf("%d", &L[i]);
        }

        printf("%d\n", solution());
    }

    return 0;
}