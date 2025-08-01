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

	int testcase;
	cin >> testcase;

	int result = 0;

	while (testcase--) {
		int n;
		cin >> n;
		if (n == 0) {
			s.pop();
		}
		else {
			s.push(n);
		}
		//cout << "[현재 top] " << s.top() << endl;
		//cout << "[s.size()] " << s.size() << endl;
	}

	int size = s.size();

	for (int i = 0; i < size; i++) {
		result += s.top();
		s.pop();
	}

	cout << result << endl;

    return 0;
}