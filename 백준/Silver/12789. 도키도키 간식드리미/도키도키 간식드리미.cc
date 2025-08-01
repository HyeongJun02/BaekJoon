#include <iostream>
#include <vector>
#include <cmath>
//#include <unordered_map>
#include <stack>

#define endl "\n"
typedef long long ll;
using namespace std;

stack<int> s;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	int T, cnt = 1;

	while (N--) {
		cin >> T;

		if (T == cnt) cnt++;
		else s.push(T);

		while (!s.empty() && s.top() == cnt) {
			s.pop();
			cnt++;
		}
	}

	if (s.empty()) cout << "Nice";
	else cout << "Sad";

    return 0;
}