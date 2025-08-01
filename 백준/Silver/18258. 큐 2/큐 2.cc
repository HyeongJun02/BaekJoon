#include <iostream>
#include <vector>
//#include <unordered_map>
#include <queue>
#include <string>

#define endl "\n"
typedef long long ll;
using namespace std;

queue<int>q;

void run(string command) {
	if (command == "push") {
		int n;
		cin >> n;
		q.push(n);
	}
	else if (command == "pop") {
		if (q.empty()) {
			cout << "-1" << endl;
		}
		else {
			cout << q.front() << endl;
			q.pop();
		}
	}
	else if (command == "size") {
		cout << q.size() << endl;
	}
	else if (command == "empty") {
		if (q.empty()) cout << "1" << endl;
		else cout << "0" << endl;
	}
	else if (command == "front") {
		if (q.empty()) {
			cout << "-1" << endl;
		}
		else cout << q.front() << endl;
	}
	else if (command == "back") {
		if (q.empty()) {
			cout << "-1" << endl;
		}
		else cout << q.back() << endl;
	}
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	while (N--) {
		string command;
		cin >> command;
		run(command);
	}

    return 0;
}