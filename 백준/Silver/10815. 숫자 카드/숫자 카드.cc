#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	int* a, * b, * res;
	cin >> N;
	a = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	int M;
	cin >> M;
	b = new int[M];
	res = new int[M];
	for (int i = 0; i < M; i++) {
		cin >> b[i];
	}
	sort(a, a + N);
	for (int i = 0; i < M; i++) {
		int right = N - 1;
		int left = 0;
		while (left <= right) {
			int mid = (right + left) / 2;
			if (a[mid] == b[i]) {
				res[i] = 1;
				break;
			}
			if (a[mid] > b[i]) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
		}
	}
	for (int i = 0; i < M; i++) {
		cout << res[i] << ' ';
	}
	cout << endl;
}