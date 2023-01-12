#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning (disable:4996)

int main() {
	int N;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 5 * N; j++) {
			printf("@");
		}
		printf("\n");
	}

	for (int i = 0; i < 3 * N; i++) {
		for (int j = 0; j < N; j++) {
			printf("@");
		}
		printf("\n");
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 5 * N; j++) {
			printf("@");
		}
		printf("\n");
	}
}