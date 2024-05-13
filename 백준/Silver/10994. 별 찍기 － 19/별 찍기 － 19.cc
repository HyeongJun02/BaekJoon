#pragma warning (disable:4996)
using namespace std;

#include <stdio.h>
#include <string.h>

char area[400][400];

void draw_star(int len, int row, int col) {
    for (int i = 0; i < len; i++) {
        if (i == 0 || i == len - 1) { // 첫 행, 마지막 행
            for (int j = 0; j < len; j++)
                area[row + i][col + j] = '*';
        }
        else { // 나머지
            area[row + i][col] = '*'; // col 열
            area[row + i][col + len - 1] = '*';  // col + len - 1 열
        }
    }
}

void func(int n, int row, int col) {
    int len = 4 * n - 3;
    draw_star(len, row, col); // 사각형 그리기
    if (n == 1) return; // 마지막일 경우 return
    func(n - 1, row + 2, col + 2); // +2행, +2열 후 다음 사각형 그리기
}

int main() {
    int N;
    scanf("%d", &N);

    // 도화지 공백으로
    for (int i = 0; i < 4 * N - 3; i++) {
        for (int j = 0; j < 4 * N - 3; j++) {
            area[i][j] = ' ';
        }
    }

    func(N, 0, 0);

    for (int i = 0; i < 4 * N - 3; i++) {
        for (int j = 0; j < 4 * N - 3; j++) {
            printf("%c", area[i][j]);
        }
        printf("\n");
    }

    return 0;
}