#pragma warning (disable:4996)

#include <stdio.h>

// 메인
int main()
{
	int max, inp, cnt;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &inp);
		if (i == 0) {
			max = inp;
			cnt = i + 1;
		}
		else {
			if (max < inp) {
				max = inp;
				cnt = i + 1;
			}
		}
	}
	printf("%d\n%d", max, cnt);
}