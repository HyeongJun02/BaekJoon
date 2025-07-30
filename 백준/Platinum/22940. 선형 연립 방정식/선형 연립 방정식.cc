#include <iostream>
#include <algorithm>
#include <vector>

#define endl "\n"

using namespace std;
//typedef long long ll;

int N;
vector<vector<double>> A;
vector<double> B;

void print() {
	for (int i = 0; i < N; i++) {
		printf("%.lf ", (A[i][N]));
	}
}

void solve() {
	for (int i = 0; i < N; i++) {
		double div = A[i][i];
		for (int j = i; j <= N; j++) {
			A[i][j] /= div;
		}
		for (int j = 0; j < N; j++) {
			if (i == j) continue;
			double div = -A[j][i];
			for (int k = 0; k <= N; k++) {
				A[j][k] += A[i][k] * div;
			}
		}
	}
	print();
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> N;
	for (int t = 0; t < N; t++) {
		vector<double> input;
		for (int a = 0; a < N + 1; a++) {
			int tmp;
			cin >> tmp;
			input.push_back(tmp);
		}
		A.push_back(input);
		//int tmp;
		//cin >> tmp;
		//B.push_back(tmp);
	}
	solve();

	return 0;
}