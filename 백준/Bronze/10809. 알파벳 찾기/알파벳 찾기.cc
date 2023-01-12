#include <stdio.h>
#include <string.h>

#pragma warning (disable:4996)

int main() {
	int cnt[26];
	char S[100];

	scanf("%s", S);

	for (int i = 0; i < 26; i++) {
		cnt[i] = -1;
	}

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < strlen(S); j++) {
			if (S[j] == i + 97) {
				if (cnt[i] == -1) {
					cnt[i] = j;
				}
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", cnt[i]);
	}
}