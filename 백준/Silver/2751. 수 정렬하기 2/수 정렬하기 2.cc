#include <stdio.h>
#include <algorithm>

using namespace std;

#pragma warning (disable:4996)

int main() {
	int N;
	int* arr;

	scanf("%d", &N);

	arr = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}
}