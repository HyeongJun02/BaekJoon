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

queue<int>q;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;
	for (int i = 1; i <= N;i++) {
		q.push(i);
	}
	int save;
	while (q.size() > 1) {
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout << q.front() << endl;

    return 0;
}