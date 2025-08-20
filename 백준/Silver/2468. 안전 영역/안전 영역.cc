#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

#include <vector>
//#include <map>
//#include <unordered_map>
#include <set>
//#include <unordered_set>
#include <queue>
//#include <stack>

#include <climits>

#define endl "\n"
#define INF INT_MAX

typedef long long ll;
using namespace std;

int N;
int arr[101][101];
bool isLand[101][101];
bool visited[101][101];
int height = 1;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int maxLands = 0;

void DFS(int x, int y) {
	if (x < 0 || x >= N || y < 0 || y >= N) return;
	if (visited[x][y]) return;
	if (!isLand[x][y]) return;
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		DFS(x + dx[i], y + dy[i]);
	}
}

void setLand(int height) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			isLand[i][j] = (arr[i][j] <= height) ? false : true;
		}
	}
}

void resetVisited() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			visited[i][j] = false;
		}
	}
}

void solve() {
	for (int height = 0; height <= 100; height++) {
		setLand(height);
		int lands = 0;
		resetVisited();
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (!isLand[i][j] || visited[i][j]) continue;
				DFS(i, j);
				lands++;
			}
		}
		maxLands = (maxLands < lands) ? lands : maxLands;
	}
	cout << maxLands << endl;
}

void input() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	input();
	solve();
}