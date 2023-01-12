#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable:4996)
using namespace std;

int leastCommonMultiple(int a, int b) {
	return (b
		? leastCommonMultiple(b, a % b)
		: a);
}

int main() {
	int N;
	int* arr;
	scanf("%d", &N);
	arr = new int[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i < N; i++) {
		int LCM = leastCommonMultiple(arr[0], arr[i]);
		printf("%d/%d\n", arr[0] / LCM, arr[i] / LCM);
	}
}