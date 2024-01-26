#pragma warning (disable:4996)
using namespace std;

#include <stdio.h>
#include <vector>

int n, a;
int dp[501][501];
int sum[501];

int main() {
    sum[0] = 0;
    int t; // TestCase
    scanf("%d", &t);
    for (int ca = 0; ca < t; ca++) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &a);
            sum[i] = sum[i - 1] + a;
        }

        for (int k = 1; k < n; k++) {
            int i = 1;
            int j = k + 1;
            for (int u = 0; u < n - k; u++) {
                dp[i][j] = 1e9;
                for (int m = j - k; m <= j - 1; m++) {
                    dp[i][j] = min(dp[i][j], dp[i][m] + dp[m + 1][j] + sum[j] - sum[i - 1]);
                }
                i++;
                j++;
            }
        }
        printf("%d\n", dp[1][n]);
    }
    return 0;
}