#pragma warning (disable:4996)

#include <stdio.h>

int cnt = 0;

// 한수의 개수 함수
void han(int x) {
	if (x < 100) {
		cnt++;
	}
	else if (x >= 100 && x < 1000) {
		int a = x / 100;
		x %= 100;
		int b = x / 10;
		int c = x % 10;
		if ((a + c) == b * 2) {
			cnt++;
		}
	}
}

// 메인
int main()
{
	int inp;
	scanf("%d", &inp);

	for (int i = 1; i <= inp; i++) {
		han(i);
	}

	printf("%d\n", cnt);
}