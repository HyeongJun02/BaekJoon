#include <iostream>
#include <vector>
//#include <unordered_map>
#include <queue>
#include <stack>

#define endl "\n"
typedef long long ll;
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	vector<int> first;
	queue<ll> q;
	stack<ll> s;

	for (int i = 0;i < N;i++) {
		int A;
		cin >> A;
		first.push_back(A);
	}
	for (int i = 0;i < N;i++) {
		int B;
		cin >> B;
		if (first.at(i) == 0) s.push(B);
	}
	while (!s.empty()) {
		q.push(s.top());
		s.pop();
	}
	int M;
	cin >> M;
	for (int i = 0;i < M;i++) {
		int A;
		cin >> A;
		q.push(A);
	}
	for (int i = 0;i < M;i++) {
		cout << q.front() << " ";
		q.pop();
	}

    return 0;
}