#include <iostream>
#include <vector>
#include <cmath>
//#include <unordered_map>
#include <stack>

#define endl "\n"
typedef long long ll;
using namespace std;

stack<int> s;

void run(int command) {
	if (command == 1) {
		int x;
		cin >> x;
		s.push(x);
	}
	else if (command == 2) {
		if (s.empty()) cout << "-1" << endl;
		else {
			cout << s.top() << endl;
			s.pop();
		}
	}
	else if (command == 3) {
		cout << s.size() << endl;
	}
	else if (command == 4) {
		if (s.empty()) cout << "1" << endl;
		else cout << "0" << endl;
	}
	else if (command == 5) {
		if (s.empty()) cout << "-1" << endl;
		else {
			cout << s.top() << endl;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;
	while (N--) {
		int command;
		cin >> command;
		run(command);
	}
    return 0;
}