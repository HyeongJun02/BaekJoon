#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>

#pragma warning (disable:4996)
using namespace std;

int leastCommonMultiple(int a, int b) {
	return (b
		? leastCommonMultiple(b, a % b)
		: a);
}

int highestCommonFactor(int a, int b, int LCM) {
	return (a / LCM * b);
}

int main() {
	int T;
	int a, b;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", highestCommonFactor(a, b, leastCommonMultiple(a, b)));
	}
}