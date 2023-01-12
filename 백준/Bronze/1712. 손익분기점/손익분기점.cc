#pragma warning (disable:4996)

#include <stdio.h>

int main(void)
{
	long long a, b, c, sell_pri, cpa;
	int cnt = 0;

	scanf("%lld %lld %lld", &a, &b, &c);
	sell_pri = c - b;

	if (sell_pri <= 0) {
		printf("-1\n");
	}
	else {
		cnt = (long long)(a / sell_pri) + 1;
		printf("%d\n", cnt);
	}
}