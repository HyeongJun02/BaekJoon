#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning (disable:4996)

int main() {
	int N, high;
	int* score;
	int high_score[9];

	char teamname[9][10] = { "PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY" };
	char admin[10];

	scanf("%d", &N);

	score = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &score[j]);
			if (j == 0) {
				high_score[i] = score[j];
			}
			high_score[i] = (high_score[i] > score[j]) ? high_score[i] : score[j];
		}
		//printf("%s: %d\n\n", teamname[i], high_score[i]);
		if (i == 0) {
			high = high_score[i];
			strcpy(admin, teamname[i]);
			//printf("==FIRST==\n\n");
		}
		else {
			if (high < high_score[i]) {
				//printf("==CHANGE==\n\n");
				high = high_score[i];
				strcpy(admin, teamname[i]);
			}
		}
	}
	printf("%s\n", admin);
}