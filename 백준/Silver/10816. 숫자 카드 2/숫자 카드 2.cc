#include <iostream>
#include <vector>
#include <unordered_map>

#define endl "\n"
typedef long long ll;
using namespace std;

int N, M;
unordered_map<int, int> cards;

void solve() {
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		int card;
		cin >> card;
		cards[card]++;
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		int select;
		cin >> select;
		cout << cards[select] << ' ';
	}
	cout << endl;

	return 0;
}