#include <stdio.h>

#pragma warning (disable:4996)

int main(void) {
	int N;
	int sum;
	int cnt;

	scanf("%d", &N);

	for (int i = 1; i < N; i++) {
		sum = i;
		cnt = i;

		while (cnt) {
			sum += cnt % 10;
			cnt /= 10;
		}

		if (N == sum) {
			printf("%d\n", i);
			return 0;
		}
	}

	printf("0\n");
	return 0;
}