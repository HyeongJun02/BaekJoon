#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable:4996)

int main() {
	int N, cnt;
	int max = 0;
	int* bong;

	scanf("%d", &N);
	bong = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &bong[i]);
	}

	for (int i = 0; i < (N - 1); i++) {
		cnt = 0;
		for (int j = i + 1; j < N; j++) {
			if (bong[i] < bong[j]) {
				break;
			}
			else {
				cnt++;
			}
		}
		max = (max < cnt) ? cnt : max;
	}
	printf("%d\n", max);
}