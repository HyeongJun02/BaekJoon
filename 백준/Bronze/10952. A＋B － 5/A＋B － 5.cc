#pragma warning (disable:4996)

#include <stdio.h>

int main()
{
	int a, b;
	while (1) {
		scanf("%d", &a);
		scanf("%d", &b);
		if (a == 0 && b == 0) {
			break;
		}
		printf("%d\n", a + b);
	}
}