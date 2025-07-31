#pragma warning(disable:4996)

#include <stdio.h>
#include <string.h>

int recursion_count;

int recursion(const char* s, int l, int r) {
    recursion_count++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    int T;
    char S[1001];

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf(" %s", S);

        recursion_count = 0;
        int result = isPalindrome(S);

        printf("%d %d\n", result, recursion_count);
    }

    return 0;
}
