#pragma warning (disable:4996)
using namespace std;

#include <stdio.h>
#include <vector>
#include <algorithm>

vector<int>v;
vector<int>gap;

// 최대공약수를 구하는 함수 (유클리드 호제법)
int Euclidean(int a, int b) {
	int r = a % b;
	if (r == 0)
		return b;
	else
		return Euclidean(b, r);
}

int main() {
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int tmp;
		scanf("%d", &tmp);
		v.push_back(tmp);
		if (i != 0) {
			gap.push_back(v[i] - v[i - 1]);
		}
	}
	sort(gap.begin(), gap.end());

	int result = 0;
	int gcd = gap[0];

	for (int i = 1; i < gap.size(); i++) {
		gcd = Euclidean(gcd, gap[i]);
	}
	for (int i = 0; i < gap.size(); i++) {
		result += (gap[i] / gcd) - 1;
	}
	printf("%d\n", result);
}