#pragma warning (disable:4996)

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, X, inp, cnt = 0;
	int* A;

	scanf("%d %d", &N, &X);
	A = (int *)malloc(N * sizeof(int));

	for (int i = 0; i < N; i++) {
		scanf("%d", &inp);
		if (X > inp) {
			A[cnt] = inp;
			cnt++;
		}
	}

	for (int i = 0; i < cnt; i++) {
		printf("%d ", A[i]);
	}

	free(A);
}