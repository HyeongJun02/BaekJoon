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
int T[16], P[16];

int maxP = 0;
int totalP = 0;

void solve(int today) {
	if (today + T[today] - 1 > N) return;
	//cout << "[work] today is " << today << endl;
	totalP += P[today];
	for (int i = today + T[today]; i <= N; i++) {
		solve(i);
	}
	maxP = (totalP > maxP) ? totalP : maxP;
	totalP -= P[today];
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> T[i] >> P[i];
	}

	for (int i = 1; i <= N; i++) {
		totalP = 0;
		//cout << "===================================" << endl;
		solve(i);
	}

	cout << maxP << endl;

	return 0;
}