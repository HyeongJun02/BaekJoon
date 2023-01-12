#include <stdio.h>

#pragma warning (disable:4996)

int main()
{
	int E, S, M, bae;

	scanf("%d %d %d", &E, &S, &M);

	bae = 0;

	for (int i = 0; 1; i++) {
		if (((i * 15 + E) - S) % 28 == 0) {
			if (((i * 15 + E) - M) % 19 == 0) {
				printf("%d\n", i * 15 + E);
				break;
			}
		}
	}
}
