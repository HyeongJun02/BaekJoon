#pragma warning (disable:4996)

#include <stdio.h>
#include <string.h>

// 메인
int main()
{
	int a, acc, score;
	char ox[80];
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		fflush(stdin);
		scanf("%s", ox);
		score = 0;
		acc = 0;
		for (int cnt = 0; cnt < strlen(ox); cnt++) {
			if (ox[cnt] == 'O') {
				acc++;
				score += acc;
			}
			else {
				acc = 0;
			}
			//printf("<%c>\n[%3d]: acc: %d, score: %d\n", ox[cnt], cnt, acc, score);
		}
		printf("%d\n", score);
	}
}