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

vector<vector<int>>g(1001);

int N, M;
int cnt = 0;
bool visited[1001];

void DFS(int now) {
	visited[now] = true;
	for (int i : g[now]) {
		if (visited[i]) continue;
		DFS(i);
	}
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;

	for (int i = 1; i <= M; i++) {
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}

	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			DFS(i);
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}