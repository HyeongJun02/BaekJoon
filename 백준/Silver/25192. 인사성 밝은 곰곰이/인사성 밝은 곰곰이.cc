#include <iostream>
#include <algorithm>

#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>

#include <limits>

#define endl "\n"
#define INF 987654321

typedef long long ll;
using namespace std;

int N;
int cnt = 0;
set<string> s;

void solve(string input) {
	if (input == "ENTER") {
		cnt += s.size();
		s.clear();
		return;
	}
	else {
		s.insert(input);
	}
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N;

	for (int testcase = 0; testcase < N; testcase++) {
		string input;
		cin >> input;
		solve(input);
	}

	cnt += s.size();

	cout << cnt << endl;

    return 0;
}