#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    vector<int> result;
    int n, x;
    cin >> n;

    priority_queue<int> q1; // 최대힙 (음수 부분)
    priority_queue<int, vector<int>, greater<int>> q2; // 최소힙
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x != 0) {
            if (x < 0) {
                q1.push(x);
            }
            else {
                q2.push(x);
            }
        }
        else {
            if (q1.empty() && q2.empty()) {
                result.push_back(0);
            }
            else if (q1.empty()) {
                result.push_back(q2.top());
                q2.pop();
            }
            else if (q2.empty()) {
                result.push_back(q1.top());
                q1.pop();
            }
            else {
                if (-q1.top() > q2.top()) {
                    result.push_back(q2.top());
                    q2.pop();
                }
                else {
                    result.push_back(q1.top());
                    q1.pop();
                }
                //result.push_back(q.top());
            }
        }
    }
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << '\n';
    }
    return 0;
}
