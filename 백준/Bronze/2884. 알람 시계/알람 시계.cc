#pragma warning (disable:4996)

#include <stdio.h>

int main()
{
	int h, m;

	scanf("%d %d", &h, &m);

	m -= 45;
	if (m < 0) {
		h -= 1;
		if (h < 0) {
			h += 24;
		}
		m += 60;
	}

	printf("%d %d", h, m);
}