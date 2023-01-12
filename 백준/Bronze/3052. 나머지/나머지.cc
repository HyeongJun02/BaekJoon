#include <stdio.h>

#pragma warning (disable:4996)

int main() {
	int rest[42], a, cnt = 0;
	
	for (int i = 0; i < 42; i++) {
		rest[i] = 0;
	}

	for (int i = 0; i < 10; i++) {
		scanf("%d", &a);
		rest[a % 42]++;
		//printf("rest[%d]: %d\n\n", a % 42, rest[a % 42]);
	}

	for (int i = 0; i < 42; i++) {
		//printf("rest[%d]: %d\n", i, rest[i]);
		if (rest[i] != 0) {
			//printf("%d\n\n", i);
			cnt++;
		}
	}

	printf("%d\n", cnt);
}