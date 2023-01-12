#include <stdio.h>

#pragma warning (disable:4996)

int N;

// 별 찍는 함수
void star(int x, int y, int n)
{
	if ((x / n) % 3 == 1 && (y / n) % 3 == 1)
		printf(" ");
	else
	{
		if (n == 1)
			printf("*");
		else
			star(x, y, n / 3);
	}
}

// 3의 제곱수 확인 함수
int isthr(int N)
{
	for (int i = 1; i < 8; i++) {
		if ((N % 3) != 0) {
			return 1;
		}
		if (N == 3) {
			return 0;
		}
		N /= 3;
	}

	return 1;
}

// 메인 함수
int main() {
	int check;

	// N 입력
	scanf("%d", &N);

	check = isthr(N);

	// 3의 제곱수가 아닐 경우
	if (check == 1) {
		printf("N은 3^k의 형태여야 합니다.(1<=k<8)\n");
		return 1;
	}
	// 3의 제곱수일 경우
	else {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				star(i, j, N / 3);
			}
			printf("\n");
		}
	}
}