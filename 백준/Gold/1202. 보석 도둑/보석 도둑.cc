#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define MAX 300001
using namespace std;

int N; // 보석 수
int K; // 가방 수


pair<int, int> v_jewerly[MAX]; // 무게, 가격
int v_bag[MAX];
priority_queue<int, vector<int>, less<int>> pq;


long long solve() {
    sort(v_jewerly, v_jewerly + N); // 보석을 무게로 정렬 (오름차순)
    sort(v_bag, v_bag + K); // 가방을 무게로 정렬 (오름차순)

    int idx = 0;
    long long sum = 0;

    for (int i = 0; i < K; i++) { // 가방 수만큼 반복. 일단 첫 가방부터
        // [조건]
        // - idx가 보석 수(N)보다 작을 동안 (보석 전체 탐색)
        // - i번째 가방에 idx번째 보석이 들어갈 수 있다면 (가방에 보석을 넣을 수 없게 된다면 -> 보석의 무게가 오름차순이기 때문에 뒷 보석은 볼 필요가 없음)
        // 위 조건이 하나라도 아니라면 반복 종료
        while (idx < N && v_bag[i] >= v_jewerly[idx].first) {
            // cout << "[i] " << i << ", [idx] " << idx << endl;
            // cout << "[v_juwerly.second] " << v_jewerly[idx].second << endl;
            pq.push(v_jewerly[idx].second);
            idx++;
        }
        // [조건]
        // - pq(가방에 넣을 수 있는 보석들)가 비어있지 않다면
        if (!pq.empty()) {
            sum += pq.top(); // pq는 최대큐이기 때문에, top의 요소를 얻으면 됨
            pq.pop();
        }
    }
    return sum;
}

int main() {
    cin >> N >> K; // N: 보석 수, K: 가방 수
    for (int i = 0; i < N; ++i) {
        cin >> v_jewerly[i].first >> v_jewerly[i].second; // 보석의 정보, 가격
    }
    for (int i = 0; i < K; ++i) {
        cin >> v_bag[i]; // 가방의 최대 무게
    }
    cout << solve();
}