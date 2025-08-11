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

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N;

	vector <int> dp(N + 1, 0);

	int result = 0;
	int cur = 0;

	for (int i = 0; i < N; i++) {
		int day, cost;
		cin >> day >> cost;

		cur = max(cur, dp[i]);

		if (i + day <= N) {
			dp[i + day] = max(dp[i + day], cur + cost);
			result = max(dp[i + day], result);
		}
	}
	cout << result;
}