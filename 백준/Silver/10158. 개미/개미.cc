#include <stdio.h>
int main() {
	int w, h, p, q, t;
	int a, b;
	scanf("%d %d", &w, &h);
	scanf("%d %d", &p, &q);
	scanf("%d", &t);
	p += t;
	q += t;
	a = p;
	b = q;
	p %= w;
	q %= h;
	if ((a / w) % 2 != 0) {
		p = w - p;
	}
	if ((b / h) % 2 != 0) {
		q = h - q;
	}
	printf("%d %d\n", p, q);
}