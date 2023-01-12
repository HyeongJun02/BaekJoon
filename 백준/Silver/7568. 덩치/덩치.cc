#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable:4996)

int main(void) {
	int N;
	int* weight, * height, *rank;

	scanf("%d", &N);

	weight = (int*)malloc(sizeof(int) * N);
	height = (int*)malloc(sizeof(int) * N);
	rank = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &weight[i]);
		scanf("%d", &height[i]);

		rank[i] = 1;
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (weight[i] > weight[j]) {
				if (height[i] > height[j]) {
					rank[j]++;
				}
			}
			else if (weight[i] < weight[j]) {
				if (height[i] < height[j]) {
					rank[i]++;
				}
			}
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d ", rank[i]);
	}

	free(weight);
	free(height);
	free(rank);
}