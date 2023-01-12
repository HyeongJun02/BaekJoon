#pragma warning (disable:4996)

#include <stdio.h>

int main()
{
	int n;
	int a, b;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i + 1, a + b);
	}
}