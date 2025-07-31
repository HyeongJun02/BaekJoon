#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define endl "\n"
typedef long long ll;

using namespace std;

int cost[100001], dist[100001];

ll solve(int n) {
	int min_cost = INT_MAX;
	ll dist_sum = 0;

	for (int i = 1; i < n; i++) {
		if (cost[i] < min_cost) min_cost = cost[i];
		dist_sum += (ll)min_cost * (ll)dist[i];
	}

	return dist_sum;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	for (int i = 1; i < n; i++) cin >> dist[i];
	for (int i = 1; i <= n; i++) cin >> cost[i];
	cout << solve(n);

	return 0;
}