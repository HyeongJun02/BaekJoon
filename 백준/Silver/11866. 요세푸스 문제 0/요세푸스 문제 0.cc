#include <iostream>
#include <algorithm>

#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>

#include <limits>

#define endl "\n"
#define INF 987654321

typedef long long ll;
using namespace std;

queue<int>q;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, K;
	int i;
	cin >> N >> K;
	for (i = 1; i <= N; i++)
		q.push(i);
	cout << "<";
	while (q.size() != 0)
	{
		for (i = 1; i < K; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		if (q.size() != 1)
			cout << ", ";
		q.pop();
	}
	cout << ">";

    return 0;
}