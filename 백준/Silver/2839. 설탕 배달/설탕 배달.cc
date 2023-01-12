#pragma warning (disable:4996)

#include <stdio.h>

int main(void)
{
	int N, cnt = 0;
	scanf("%d", &N);
	while (1) {
		cnt++;

		if (N % 5 == 0) {
			N -= 5;
		}
		else {
			N -= 3;
		}

		if (N < 0) {
			printf("-1\n");
			break;
		}
		else if (N == 0) {
			printf("%d\n", cnt);
			break;
		}
	}
    return 0;
}