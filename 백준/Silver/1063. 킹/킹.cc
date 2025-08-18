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

//#include <limits>

#define endl "\n"
#define INF 2147483647

typedef long long ll;
using namespace std;

int N;
int MOVE[8][2] = { {0,1}, {1,1}, {1,0}, {1,-1}, {0,-1}, {-1,-1}, {-1,0}, {-1,1} };
int king[2], stone[2];
char alpha[9] = { ' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };

void solve(int m) {
	int king_x = king[0] + MOVE[m][0];
	int king_y = king[1] + MOVE[m][1];
	int stone_x = stone[0] + MOVE[m][0];
	int stone_y = stone[1] + MOVE[m][1];

	if (king_x > 8 || king_x < 1 || king_y > 8 || king_y < 1) return;
	if (king_x == stone[0] && king_y == stone[1]) {
		if (stone_x > 8 || stone_x < 1 || stone_y > 8 || stone_y < 1) return;
		stone[0] = stone_x;
		stone[1] = stone_y;
	}
	king[0] = king_x;
	king[1] = king_y;
	//cout << "king(" << king_x << ", " << king_y << ")" << endl;
}

void input() {
	string k, s;
	cin >> k >> s >> N;
	king[0] = k[0] - 'A' + 1;
	king[1] = k[1] - '0';
	stone[0] = s[0] - 'A' + 1;;
	stone[1] = s[1] - '0';
	for (int i = 0; i < N; i++) {
		string m;
		cin >> m;
		if (m == "T") solve(0);
		else if (m == "RT") solve(1);
		else if (m == "R") solve(2);
		else if (m == "RB") solve(3);
		else if (m == "B") solve(4);
		else if (m == "LB") solve(5);
		else if (m == "L") solve(6);
		else if (m == "LT") solve(7);
	}
	cout << alpha[king[0]] << king[1] << ' ' << alpha[stone[0]] << stone[1] << endl;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	input();
}