#include <iostream>
#include <vector>

using namespace std;

long long com[2002][2002];
long long N, K, M, C = 1;

int main() {
    cin >> N >> K >> M;
    com[0][0] = 1;
    // 파스칼 삼각형 생성
    for (int i = 0; i <= 2000; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == j)
                com[i][j] = 1;
            else
                com[i][j] = (com[i - 1][j - 1] + com[i - 1][j]) % M;
        }
    }

    // Lucas Theorem
    while (N || K) {
        C *= com[N % M][K % M];
        N /= M;
        K /= M;
        // 모듈러 분배법칙 가능
        C %= M;
    }

    cout << C;
}