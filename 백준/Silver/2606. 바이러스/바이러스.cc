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
vector<vector<int>>com(101);
int cnt = 0;
bool visited[101];

void DFS(int now) {
	visited[now] = true;
	cnt++;
	for (int i : com[now]) {
		if (visited[i]) continue;
		DFS(i);
	}
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N;
	int C;
	cin >> C;

	for (int i = 1; i <= C; i++) {
		int a, b;
		cin >> a >> b;
		com[a].push_back(b);
		com[b].push_back(a);
	}

	DFS(1);

	cout << cnt - 1 << endl;

	return 0;
}