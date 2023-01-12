#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable:4996)

void lineup(int* a, int* b) {
	if (*a < *b) {
		int tmp;
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
}

int main() {
	int N;
	int* arr;

	scanf("%d", &N);

	arr = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			lineup(&arr[i], &arr[j]);
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}
}

