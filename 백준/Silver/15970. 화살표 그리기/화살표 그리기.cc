#pragma warning (disable:4996)
using namespace std;

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// 각 색깔 별 점의 개수
int color_count[5001] = { 0, };

int main() {
	int x, y;
	int T;
	int distance = 0;

	scanf("%d", &T);

	// [ 점의 좌표 [ 점의 색 ]]
	vector<vector<int>> v(T + 1);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &x, &y);
		v[y].push_back(x);
		color_count[y]++;
		// printf("color_count[%d] : %d\n", y, color_count[y]);
	}

	for (int i = 0; i <= T; i++) {
		sort(v[i].begin(), v[i].end());
	}

	for (int i = 0; i <= T; i++) {
		if (v[i].size() == 0) continue;
		// printf("i: %d\n", i);
		// printf("color_count[%d] : %d\n", i, color_count[y]);

		for (int j = 0; j < color_count[i]; j++) {
			// printf("j: %d\n", j);
			// 처음 점
			if (j == 0)
				distance += v[i][1] - v[i][0];
			// 마지막 점
			else if (j == color_count[i] - 1)
				distance += v[i][color_count[i] - 1] - v[i][color_count[i] - 2];
			else {
				int a = v[i][j - 1];
				int b = v[i][j + 1];

				distance += min(v[i][j] - a, b - v[i][j]);
			}
		}
	}

	printf("%d", distance);
}