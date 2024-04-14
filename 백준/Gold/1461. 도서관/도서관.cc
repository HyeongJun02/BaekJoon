#pragma warning(disable: 4996)
using namespace std;

#include <stdio.h>
#include <vector>
#include <algorithm>

int result_distance(vector<int> coord, int M) {
    int distance = 0;

    for (int i = coord.size() - 1; i >= 0; i -= M) {
        distance += coord[i] * 2;
    }

    return distance;
}

int main() {
    int N, M;
    int result = 0;
    vector<int> pos_coord; // 양수 위치
    vector<int> neg_coord; // 음수 위치

    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N; i++) {
        int coord;
        scanf("%d", &coord);
        (coord < 0) ? neg_coord.push_back(-coord) : pos_coord.push_back(coord);
    }

    sort(neg_coord.begin(), neg_coord.end());
    sort(pos_coord.begin(), pos_coord.end());

    int max_distance = 0;

    // AcessEmptyContainer 런타임 오류 해결 시도
    // 빈 vector 검열
    if (!neg_coord.empty()) {
        max_distance = max(max_distance, neg_coord.back());
    }
    if (!pos_coord.empty()) {
        max_distance = max(max_distance, pos_coord.back());
    }

    result += result_distance(pos_coord, M);
    result += result_distance(neg_coord, M);

    result -= max_distance;

    printf("%d\n", result);

    return 0;
}