#include <iostream>
#include <algorithm>

#include <vector>
//#include <map>
//#include <unordered_map>
//#include <set>
//#include <unordered_set>
//#include <queue>
//#include <stack>

//#include <limits>

#define endl "\n"
#define INF 2147483647

typedef long long ll;
using namespace std;

int N;
int input;
ll dp[101][101] = { { 0, }, };

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N;

	dp[1][1] = 1;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> input;
			if (((i + input) <= N) && input != 0) {
				dp[i + input][j] += dp[i][j];
			}
			if (((j + input) <= N) && input != 0) {
				dp[i][j + input] += dp[i][j];
			}
		}
	}

	cout << dp[N][N] << endl;
}