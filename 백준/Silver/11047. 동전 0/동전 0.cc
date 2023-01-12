#pragma warning (disable:4996)

#include <iostream>
#include <vector>

using namespace std;
vector<int> coin;

int main() {
	int N, K;
	cin >> N;
	cin >> K;

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		coin.push_back(tmp);
	}

	int cnt = 0;
	for (int i = coin.size() - 1; i >= 0; i--) {
		//cout << coin.at(i) << endl;
		while (coin.at(i) <= K) {
			//cout << "K: " << K << endl;
			//cout << "coin.at(i): " << coin.at(i) << endl;
			K -= coin.at(i);
			cnt++;
		}
		if (K == 0) break;
	}

	cout << cnt << endl;

	return 0;
}