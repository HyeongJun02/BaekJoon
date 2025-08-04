#include <iostream>
#include <vector>
//#include <unordered_map>
#include <queue>
#include <stack>
#include <limits>
#include <set>

#define endl "\n"
#define INF 987654321

typedef long long ll;
using namespace std;

int N;
vector<string> v;

void printV() {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}
	cout << endl;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N;
	v.push_back("ChongChong");

	while (N--) {
		string name1, name2;
		cin >> name1 >> name2;
		//cout << "Input count: " << N << endl;
		for (int i = 0; i < v.size(); i++) {
			//cout << "for: " << i << endl;
			if (name1 == v.at(i)) {
				v.push_back(name2);
				break;
			}
			if (name2 == v.at(i)) {
				v.push_back(name1);
				break;
			}
		}
	}
	set<string> s(v.begin(), v.end());

	cout << s.size() << endl;

    return 0;
}