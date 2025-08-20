#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

#include <vector>
//#include <map>
//#include <unordered_map>
//#include <set>
//#include <unordered_set>
#include <queue>
//#include <stack>

#include <climits>

#define endl "\n"
#define INF INT_MAX

typedef long long ll;
using namespace std;

string s;
bool visited[7][7];
int dx[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int dy[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };

bool isVisited(int x, int y) {
	if (visited[x][y]) return true;
	else return false;
}

bool canMove(int nx, int ny, int x, int y) {
	for (int i = 0; i < 8; i++) {
		if ((nx + dx[i] == x) && (ny + dy[i] == y)) return true;
	}
	return false;
}

bool isValid(int nx, int ny, int x, int y) {
	if (!isVisited(x, y) && canMove(nx, ny, x, y)) return true;
	else return false;
}

void input() {
	cin >> s;
	int firstx = s[0] - 'A';
	int firsty = s[1] - '1';
	int nx = firstx;
	int ny = firsty;
	int x, y;
	visited[nx][ny] = true;
	bool flag = true;
	for (int i = 1; i < 36; i++) {
		cin >> s;
		x = s[0] - 'A';
		y = s[1] - '1';
		if (!isValid(nx, ny, x, y)) {
			flag = false;
		}
		nx = x;
		ny = y;
		visited[x][y] = true;
	}
	if (!canMove(x, y, firstx, firsty)) flag = false;
	if (flag) cout << "Valid" << endl;
	else cout << "Invalid" << endl;
	return;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	input();
}