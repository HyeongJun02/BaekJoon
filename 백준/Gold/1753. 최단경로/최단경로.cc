#include <iostream>
#include <vector>
//#include <unordered_map>
#include <queue>
#include <stack>
#include <limits>

#define endl "\n"
#define INF 987654321

typedef long long ll;
using namespace std;

int V, E, K;
vector<pair<int, int>> v[20010];
int dist[20010];

void dijkstra() {
	priority_queue<pair<int, int>> pq;
	pq.push({ 0, K });
	dist[K] = 0;

    while (!pq.empty()) {
        int distance = -pq.top().first;
        int current = pq.top().second;

        pq.pop();

        if (dist[current] < distance) continue;

        for (int i = 0; i < v[current].size(); i++) {
            int next = v[current][i].first;
            int next_distance = distance + v[current][i].second;

            if (next_distance < dist[next]) {
                dist[next] = next_distance;
                pq.push({ -dist[next],next });
            }
        }
    }

    for (int i = 1; i <= V; i++) {
        if (dist[i] == INF) cout << "INF\n";
        else cout << dist[i] << "\n";
    }
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> V >> E;
	cin >> K;

	for (int i = 0; i < E; i++) {
		int a, b, c;
		cin >> a >> b >> c;
        v[a].push_back({ b, c });
	}

    for (int i = 1; i <= V; i++) {
        dist[i] = INF;
    }

    dijkstra();

    return 0;
}