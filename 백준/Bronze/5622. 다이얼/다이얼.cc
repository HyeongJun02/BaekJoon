#pragma warning (disable:4996)

#include <stdio.h>
#include <cstring>

int main()
{
	char num[15];
	int cnt;

	cnt = 0;

	scanf("%s", num);
	for (int i = 0; i < strlen(num); i++) {
		if (65 <= num[i] && num[i] < 68) {
			cnt += 3;
		}
		else if (68 <= num[i] && num[i] < 71) {
			cnt += 4;
		}
		else if (71 <= num[i] && num[i] < 74) {
			cnt += 5;
		}
		else if (74 <= num[i] && num[i] < 77) {
			cnt += 6;
		}
		else if (77 <= num[i] && num[i] < 80) {
			cnt += 7;
		}
		else if (80 <= num[i] && num[i] < 84) {
			cnt += 8;
		}
		else if (84 <= num[i] && num[i] < 87) {
			cnt += 9;
		}
		else if (87 <= num[i] && num[i] < 91) {
			cnt += 10;
		}
	}
	printf("%d\n", cnt);
}