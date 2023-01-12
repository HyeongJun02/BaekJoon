#pragma warning (disable:4996)

#include <stdio.h>

// 메인
int main()
{
	int a, max, min, inp;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &inp);
		if (i == 0) {
			max = inp;
			min = inp;
		}
		else {
			max = max < inp
				? inp
				: max;
			min = min > inp
				? inp
				: min;
		}
	}
	printf("%d %d", min, max);
}