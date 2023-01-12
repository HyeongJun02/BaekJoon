#pragma warning (disable:4996)

#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, cnt, rest;
	long long x, y;
	long long d, sqrt_d;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%lld", &x);
		scanf("%lld", &y);

		d = y - x;
		sqrt_d = (int)sqrt(d);

		cnt = 2 * sqrt_d - 1;
		rest = d - sqrt_d * sqrt_d;

		if (rest > 0) {
			while(1) {
				int i = sqrt_d;
				rest -= i;
				cnt++;
				if (rest < 1) {
					break;
				}
				if (i != 1 || rest < i) {
					i--;
				}
			}
		}
		printf("%d\n", cnt);
	}
}