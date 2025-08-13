#include <iostream>
#include <algorithm>

#include <vector>
//#include <map>
//#include <unordered_map>
//#include <set>
//#include <unordered_set>
//#include <queue>
//#include <stack>

//#include <limits>

#define endl "\n"
#define INF 2147483647

typedef long long ll;
using namespace std;

int N;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N;

	int A[51], B[51];

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}

	sort(A, A + N);
	sort(B, B + N, greater<>());

	int result = 0;
	for (int i = 0; i < N; i++) {
		result += A[i] * B[i];
	}
	cout << result << endl;
}