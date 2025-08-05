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
//#define INF 987654321

typedef long long ll;
using namespace std;

int N;
int map[17][17];
int cnt = 0;

int dr[3] = { 0,1,1 };
int dc[3] = { 1,0,1 };

// [Check] 이동 가능한지 확인
bool check(int r, int c) {
	// 맵을 벗어났다면 False
	if ((r > N || r < 1) || (c > N || c < 1)) return false;
	// 벽이 있다면 False
	else if (map[r][c] == 1) return false;
	// True
	else return true;
}

void DFS(int r, int c, int dir) { // 0: 가로, 1: 세로, 2: 대각선
	// 끝 지점까지 도달했다면
	if (r == N && c == N) {
		cnt++;
		return;
	}

	// 모든 방향에 대하여 하나씩 확인
	for (int i = 0; i < 3; i++) {
		// 방향이 (가로 -> 세로), (세로 -> 가로)로 변경될 수 없음
		if ((dir == 0 && i == 1) || (dir == 1 && i == 0)) continue;
		// 방향에 따라 새로운 row, column 값 설정
		int new_r = r + dr[i];
		int new_c = c + dc[i];
		// [Check] 이동 가능한지 확인
		if (!check(new_r, new_c)) continue;
		// [XCPT] 변경 방향이 대각선이고, 다음 이동 구역의 위 또는 좌측 구역이 벽일 경우
		if ((i == 2) && ((map[new_r - 1][new_c] == 1) || (map[new_r][new_c - 1] == 1))) continue;

		DFS(new_r, new_c, i);
	}
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// 맵 크기 N
	cin >> N;
	// 맵 입력 map
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> map[i][j];
		}
	}

	DFS(1, 2, 0);

	cout << cnt << endl;
    return 0;
}