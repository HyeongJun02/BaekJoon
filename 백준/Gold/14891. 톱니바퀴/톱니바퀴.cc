#include <iostream>
#include <algorithm>
#include <cmath>

#include <vector>
//#include <map>
//#include <unordered_map>
//#include <set>
//#include <unordered_set>
#include <queue>
//#include <stack>

//#include <limits>

#define endl "\n"
#define INF 2147483647

typedef long long ll;
using namespace std;

int K;
int n, dir;
int wheel[5][8];

int result = 0;

bool check(int a, int b) {
	if (wheel[a][2] == wheel[b][6]) return true;
	else return false;
}

void rotate(int n, int a) {
	if (a == 1) {
		int tmp = wheel[n][7];
		for (int i = 6; i >= 0 ; i--) {
			wheel[n][i + 1] = wheel[n][i];
		}
		wheel[n][0] = tmp;
	}
	else {
		int tmp = wheel[n][0];
		for (int i = 0; i <= 6; i++) {
			wheel[n][i] = wheel[n][i + 1];
		}
		wheel[n][7] = tmp;
	}

	/*cout << "rotate wheel[" << n << "]: ";
	for (int i = 0; i < 8; i++) {
		cout << wheel[n][i] << ' ';
	}
	cout << endl;*/
}

void solve() {
	bool a, b, c;
	a = (wheel[1][2] == wheel[2][6]) ? false : true;
	b = (wheel[2][2] == wheel[3][6]) ? false : true;
	c = (wheel[3][2] == wheel[4][6]) ? false : true;
	
	if (n == 1) {
		rotate(1, dir);
		if (a) {
			rotate(2, -dir);
			if (b) {
				rotate(3, dir);
				if (c) rotate(4, -dir);
			}
		}
	}
	else if (n == 2) {
		rotate(2, dir);
		if (a) rotate(1, -dir);
		if (b) {
			rotate(3, -dir);
			if (c) rotate(4, dir);
		}
	}
	else if (n == 3) {
		rotate(3, dir);
		if (c) rotate(4, -dir);
		if (b) {
			rotate(2, -dir);
			if (a) rotate(1, dir);
		}
	}
	else if (n == 4) {
		rotate(4, dir);
		if (c) {
			rotate(3, -dir);
			if (b) {
				rotate(2, dir);
				if (a) rotate(1, -dir);
			}
		}
	}
}

void input() {
	string input;
	for (int i = 1; i <= 4; i++) {
		cin >> input;
		for (int j = 0; j < 8; j++) {
			wheel[i][j] = (input[j] == '0') ? 0 : 1;
		}
	}
	cin >> K;
	for (int i = 0; i < K; i++) {
		cin >> n >> dir;
		solve();
	}
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	input();
	cout << wheel[1][0] + wheel[2][0] * 2 + wheel[3][0] * 4 + wheel[4][0] * 8 << endl;
}