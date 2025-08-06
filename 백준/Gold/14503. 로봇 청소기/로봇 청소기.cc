#include <iostream>
#include <algorithm>

//#include <vector>
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

int N, M;
int R[50][50];
// room
// 0: 청소되지 않은 빈 칸
// 1: (i, j)에 벽이 있음
int r, c, d;
// direction
// 0: 북
// 1: 동
// 2: 남
// 3: 서

int cnt = 0;
int w[4][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };

string direct[4] = { "북", "동", "남", "서" };

void getInfo() {
	cout << "========================================" << endl;
	cout << "[current board info]" << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (i == r && j == c) {
				printf("%2d", 8);
				continue;
			}
			printf("%2d", R[i][j]);
		}
		cout << endl;
	}
	cout << "[current robot info]" << endl;
	cout << "x(r): " << r << endl;
	cout << "y(c): " << c << endl;
	cout << "d: " << direct[d] << endl;
	cout << "========================================" << endl;
}

int solve() {
	while (true) {
		//getInfo();
		// 1. 현재 칸이 아직 청소되지 않은 경우, 현재 칸을 청소한다.
		if (R[r][c] == 0) {
			//cout << "[log] clean" << endl;
			R[r][c] = -1;
			cnt++;
		}
		// 2. 현재 칸의 주변 4칸 중 청소되지 않은 빈 칸이 없는 경우,
		if (R[r - 1][c] && R[r][c + 1] && R[r + 1][c] && R[r][c - 1]) {
			// 2-1. 바라보는 방향을 유지한 채로 한 칸 후진할 수 있다면 한 칸 후진하고 1번으로 돌아간다.
			if (R[r - w[d][0]][c - w[d][1]] != 1) {
				//cout << "[log] back" << endl;
				r = r - w[d][0];
				c = c - w[d][1];
				continue;
			}
			// 2-2. 바라보는 방향의 뒤쪽 칸이 벽이라 후진할 수 없다면 작동을 멈춘다.
			else {
				break;
			}
		}
		// 3. 현재 칸의 주변 4칸 중 청소되지 않은 빈 칸이 있는 경우,
		else {
			// 3-1. 반시계 방향으로 90도 회전한다.
			//cout << "[log] turn" << endl;
			d = (d == 0) ? 3 : d - 1;
			// 3-2. 바라보는 방향을 기준으로 앞쪽 칸이 청소되지 않은 빈 칸인 경우 한 칸 전진한다.
			//cout << "[log] go" << endl;
			if (R[r + w[d][0]][c + w[d][1]] == 0) {
				r = r + w[d][0];
				c = c + w[d][1];
			}
			// 3-3. 1번으로 돌아간다.
			continue;
		}
	}

	return cnt;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	cin >> r >> c >> d;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> R[i][j];
		}
	}

	cout << solve() << endl;

    return 0;
}