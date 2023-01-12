#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable:4996)

int result(int N) {
	int cnt;
	int N_cnt = 0;

	for (int num = 666; 1; num++) {
		cnt = 0;
		int copy_num = num;
		while (copy_num) {
			int check_six = copy_num % 10;
			if (check_six == 6) {
				cnt++;
			}
			else {
				cnt = 0;
			}
			copy_num /= 10;
			if (cnt == 3) {
				N_cnt++;
			}
			if (N_cnt == N) {
				return num;
			}
		}
	}
}

int main(void) {
	int cnt, N, res;

	scanf("%d", &N);

	res = result(N);
	printf("%d\n", res);
}