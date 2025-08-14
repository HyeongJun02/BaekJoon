#include <iostream>
#include <algorithm>

#include <vector>
#include <cmath>
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
int r, c;

int result = 0;

void solve(int x, int y, int size) {
	if (c == x && r == y) {
		cout << result;
		return;
	}
	else if (c < x + size && r < y + size && c >= x && r >= y) {
		solve(x, y, size / 2);
		solve(x + size / 2, y, size / 2);
		solve(x, y + size / 2, size / 2);
		solve(x + size / 2, y + size / 2, size / 2);
	}
	else {
		result += size * size;
	}
}

void input() {
	cin >> N >> r >> c;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	input();
	solve(0, 0, pow(2, N));
}