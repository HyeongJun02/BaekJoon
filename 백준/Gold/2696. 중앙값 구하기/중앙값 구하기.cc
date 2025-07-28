#include <iostream>
#include <queue>

using namespace std;

long long T, n, num;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> n;

		vector<long long> answer;

		priority_queue<long long, vector<long long>, greater<long long>> down;
		priority_queue<long long> up;

		for (int i = 1; i <= n; i++) {
			cin >> num;

			if (i % 2 != 0) {
				up.push(num);

				if (!up.empty() && !down.empty()) {

					if (up.top() > down.top()) {
						down.push(up.top());
						up.pop();
						up.push(down.top());
						down.pop();
					}

				}
			}
			else {
				down.push(num);
			}

			if (i % 2 != 0) {
				answer.push_back(up.top());
			}
		}

		cout << answer.size() << "\n";
		for (int i = 0; i < answer.size(); i++) {
			cout << answer[i] << " ";
		}
		cout << "\n";
	}
}