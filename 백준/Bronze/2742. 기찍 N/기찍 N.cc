#pragma warning (disable:4996)

#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);

	for (int i = a; i > 0; i--) {
		printf("%d\n", i);
	}
}