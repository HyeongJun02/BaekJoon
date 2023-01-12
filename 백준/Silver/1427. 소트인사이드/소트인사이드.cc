#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable:4996)

void lineup(int* a, int* b) {
	if (*a > *b) {
		int tmp;
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
}

int main()
{
	long long inp;
	int cnt = 0;
	int n[10];

	scanf("%lld", &inp);

	while (inp) {
		n[cnt] = (inp % 10);
		inp /= 10;
		cnt++;
	}

	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < cnt; j++) {
			lineup(&n[i], &n[j]);
		}
	}

	for (int i = 0; i < cnt; i++) {
		printf("%d", n[i]);
	}
	printf("\n");
}