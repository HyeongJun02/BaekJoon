#include <iostream>
#include <queue>
#include <vector>

#define endl "\n"

using namespace std;

int main() {
    cin.tie(), ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int temp;
    priority_queue<int, vector<int>, greater<int> > pq;
    for (int i = 0;i < n * n;i++) {
        cin >> temp;
        pq.push(temp);
        if (pq.size() > n) {
            pq.pop();
        }
    }
    cout << pq.top() << endl;
    return 0;
}