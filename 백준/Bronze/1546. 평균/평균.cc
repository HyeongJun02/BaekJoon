#pragma warning (disable:4996)

#include <stdio.h>

int main(void)
{
	int N;
	float a[1000], max, hap;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%f", &a[i]);
		if (i == 0) {
			max = a[i];
		}
		else {
			max = max < a[i] ? a[i] : max;
		}
	}
	hap = 0;
	for (int i = 0; i < N; i++) {
		a[i] = a[i] / max * 100;
		hap += a[i];
	}
	printf("%f\n", hap / N);
}