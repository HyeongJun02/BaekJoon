#include <stdio.h>
#include <stdlib.h>

int self_n(int a) {
	int tmp = a;
	while (tmp) {
		a += tmp % 10;
		tmp /= 10;
	}
	if (a < 10000) {
		return a;
	}
	else {
		return 10000;
	}
}

int main(void) {
	int res[10001] = { 0, };
	for (int i = 0; i < 10000; i++) {
		res[self_n(i + 1)] = 1;
		if (res[i] != 1) {
			if (i != 0) {
				printf("%d\n", i);
			}
		}
	}
	return 0;
}