#pragma warning (disable:4996)
using namespace std;

#include <stdio.h>
#include <vector>

vector<int>v;
int dp[10001];

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		int tmp;
		scanf("%d", &tmp);
		v.push_back(tmp);
	}

	dp[0] = 1;

	for (int i = 0; i < n; i++) {
		for (int j = v[i]; j <= k; j++) {
			dp[j] += dp[j - v[i]];
		}
	}
	printf("%d", dp[k]);
}