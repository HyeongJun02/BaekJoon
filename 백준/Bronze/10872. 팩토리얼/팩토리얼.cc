#include <stdio.h>

#pragma warning (disable:4996)

int factorial(int n)
{
	if (n <= 1)
		return 1;

	return (n * factorial(n - 1));
}

int main() {
	int a;

	scanf("%d", &a);
	printf("%d\n", factorial(a));
}