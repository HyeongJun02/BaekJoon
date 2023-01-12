#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
#pragma warning (disable:4996)

int main(void) {
	int N, M, res, save, save_gap, gap, min, max;
	int* card;
	bool flag = true;
	scanf("%d %d", &N, &M);
	card = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &card[i]);
	}
	// 오름차순 정렬
	sort(card, card + N);

	min = card[0] + card[1] + card[2];
	max = card[N - 1] + card[N - 2] + card[N - 3];
	save_gap = M - min;
	// 카드 3장의 최대합이 정답일 경우
	if (max <= M) {
		res = max;
	}
	// 카드 3장의 최대합이 오답일 경우
	else {
		for (int i = 0; i < N - 2; i++) {
			for (int j = i + 1; j < N - 1; j++) {
				for (int k = j + 1; k < N; k++) {
					save = card[i] + card[j] + card[k];
					gap = M - save;
					// 연속된 3장의 카드의 gap 값이 0보다 작을 경우 모든 시뮬레이션 종료
					if ((i + 1 == j) && (j + 1 == k) && (gap < 0)) {
						flag = false;
						break;
					}
					if (gap < 0) continue;
					else {
						if (gap < save_gap) {
							//printf("\ngap: %d\nsave_gap: %d\n", gap, save_gap);
							//printf("[%d]\n<%d %d %d>\ni: %d\nj: %d\nk: %d\n\n", save, card[i], card[j], card[k], i, j, k);
							res = save;
							save_gap = gap;
						}
					}
				}
				if (flag == false) break;
			}
			if (flag == false) break;
		}
	}
	printf("%d\n", res);
	free(card);
}