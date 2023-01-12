#pragma warning (disable:4996)

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int inp1, inp2, sum, cnt;
	int* c;
	float ave, per;
	scanf("%d", &inp1);

	for (int i = 0; i < inp1; i++) {
		scanf("%d", &inp2);
		sum = 0;
		cnt = 0;
		c = (int*)malloc(inp2 * sizeof(int));
		for (int j = 0; j < inp2; j++) {
			scanf("%d", &c[j]);
			sum += c[j];
		}
		ave = 1.0 * sum / inp2;
		for (int j = 0; j < inp2; j++) {
			if (c[j] > ave) {
				cnt++;
			}
		}
		per = 100.0 * cnt / inp2;
		printf("%.3f%%\n", per);
	}
}