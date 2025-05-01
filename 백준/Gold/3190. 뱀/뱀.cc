#include <iostream>
#include <queue>
#include <map>

using namespace std;

int N, K, L;
int board[101][101]; // 0: 빈칸, 1: 사과, 2: 뱀
map<int, char> directionChanges;

// 동, 남, 서, 북 (시계 방향)
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int turn(int dir, char c) {
    if (c == 'L') return (dir + 3) % 4; // 왼쪽 회전
    else return (dir + 1) % 4; // 오른쪽 회전
}

int simulate() {
    int x = 1, y = 1, dir = 0, time = 0;
    queue<pair<int, int>> snake;
    snake.push({ x, y });
    board[x][y] = 2; // 뱀 시작 위치

    while (true) {
        time++;
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        // 벽 충돌 or 자기 몸 충돌
        if (nx < 1 || nx > N || ny < 1 || ny > N || board[nx][ny] == 2) {
            return time;
        }

        // 사과가 없으면 꼬리 제거
        if (board[nx][ny] != 1) {
            auto tail = snake.front(); snake.pop();
            board[tail.first][tail.second] = 0;
        }

        // 머리 이동
        snake.push({ nx, ny });
        board[nx][ny] = 2;
        x = nx; y = ny;

        // 방향 전환 시간이라면
        if (directionChanges.count(time)) {
            dir = turn(dir, directionChanges[time]);
        }
    }
}

int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        int r, c;
        cin >> r >> c;
        board[r][c] = 1; // 사과
    }

    cin >> L;
    for (int i = 0; i < L; i++) {
        int t;
        char c;
        cin >> t >> c;
        directionChanges[t] = c;
    }

    cout << simulate() << endl;
    return 0;
}
