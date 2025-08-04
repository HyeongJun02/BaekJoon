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

vector<int>v;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	for (int testcase = 0; testcase < N; testcase++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());
	if (v.size() % 2 == 0) {
		cout << v.at(0) * v.at(v.size() - 1) << endl;
	}
	else {
		cout << v.at(v.size() / 2)* v.at(v.size() / 2) << endl;
	}

    return 0;
}