#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable:4996)

int main(void) {
	int a, b, c, abc;
	int res[10] = { 0, };

	scanf("%d %d %d", &a, &b, &c);
	abc = a * b * c;

	while(abc) {
		res[abc % 10]++;
		abc /= 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", res[i]);
	}
}