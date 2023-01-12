#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable:4996)

int main(void) {
	int N, M, cnt, min = 32;
	char chess[50][50];

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf(" %c", &chess[i][j]);
		}
	}

	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			// 카운트 초기화
			cnt = 0;
			for (int a = i; a < i + 8; a++) {
				for (int b = j; b < j + 8; b++) {
					// 맨 왼쪽 위 칸이 흰색인 경우
					if (chess[i][j] == 'W') {
						// 흰색이어야 할 곳
						if ((a + b) % 2 == 0) {
							if (chess[a][b] != 'W') {
								cnt++;
							}
						}
						// 검은색이어야 할 곳
						else {
							if (chess[a][b] != 'B') {
								cnt++;
							}
						}
					}
					// 맨 왼쪽 위 칸이 검은색인 경우
					else if (chess[i][j] == 'B') {
						// 검은색이어야 할 곳
						if ((a + b) % 2 == 0) {
							if (chess[a][b] != 'B') {
								cnt++;
							}
						}
						// 흰색이어야 할 곳
						else {
							if (chess[a][b] != 'W') {
								cnt++;
							}
						}
					}
				}
			}
			// 64 - cnt가 더 작다면 cnt의 값을 변경
			cnt = cnt < (64 - cnt) ? cnt : (64 - cnt);

			min = min < cnt ? min : cnt;
		}
	}

	printf("%d\n", min);
}