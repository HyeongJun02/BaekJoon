#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int N;
	cin >> N;

	vector<int> P(N);
	for (int i = 0; i < N; i++) cin >> P.at(i);

	sort(P.begin(), P.end());

	int result = 0;
	for (int i = 0; i < N; i++) result += (N - i) * P.at(i);

	cout << result << endl;

	return 0;
}
