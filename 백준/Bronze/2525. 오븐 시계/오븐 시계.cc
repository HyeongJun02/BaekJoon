#include <stdio.h>

#pragma warning (disable:4996)

int main(void) {
	int cur_h, cur_m, min;

	scanf("%d %d", &cur_h, &cur_m);
	scanf("%d", &min);

	cur_m += min;

	cur_h += cur_m / 60;
	cur_m %= 60;

	while (cur_h > 23) {
		cur_h -= 24;
	}

	printf("%d %d", cur_h, cur_m);
}