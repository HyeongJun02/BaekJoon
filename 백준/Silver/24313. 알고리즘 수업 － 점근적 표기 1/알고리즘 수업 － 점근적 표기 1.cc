#include <iostream>
#include <algorithm>
#include <vector>

#define endl "\n"

using namespace std;
//typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a1, a0, n0, c;
	cin >> a1 >> a0;
	cin >> c;
	cin >> n0;

	if (((a1 * n0 + a0) <= (c * n0)) && (c >= a1)) {
		cout << "1" << endl;
	}
	else {
		cout << "0" << endl;
	}
	return 0;
}