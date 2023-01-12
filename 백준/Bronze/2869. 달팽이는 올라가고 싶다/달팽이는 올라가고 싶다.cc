#pragma warning (disable:4996)

#include <stdio.h>

int main(void)
{
	long long a, b, v, cur_cor, day;
	day = 0;
	cur_cor = 0;
	scanf("%lld %lld %lld", &a, &b, &v);
	v -= a;
	if ((v % (a - b) == 0)) {
		day = (long long)(v / (a - b));
	}
	else {
		day = (long long)(v / (a - b)) + 1;
	}
	day++;
	printf("%lld\n", day);
}