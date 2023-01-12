#include <stdio.h>

#pragma warning (disable:4996)

int pibo(int n)
{
	if (n < 1)
		return 0;
	else if (n == 1)
		return 1;
	else
		return (pibo(n - 1) + pibo(n - 2));
}

int main() {
	int a;

	scanf("%d", &a);
	printf("%d\n", pibo(a));
}