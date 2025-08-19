#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

#include <vector>
//#include <map>
//#include <unordered_map>
//#include <set>
//#include <unordered_set>
#include <queue>
//#include <stack>

//#include <limits>

#define endl "\n"
#define INF 2147483647

typedef long long ll;
using namespace std;

int N, M;
int room[1001][1001];
int dp[1001][1001];
//int maxCandy = 0;

void solve() {
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			dp[i][j] = room[i][j] + max(dp[i - 1][j - 1], max(dp[i - 1][j], dp[i][j - 1]));
		}
	}

	cout << dp[N][M] << endl;
}

void input() {
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> room[i][j];
			dp[i][j] = room[i][j];
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	input();
	solve();
}