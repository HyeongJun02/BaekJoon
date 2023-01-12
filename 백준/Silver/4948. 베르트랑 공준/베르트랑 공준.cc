#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>

#pragma warning (disable:4996)
using namespace std;

int arr[300000];
int main() {
	int n;
	//int* arr;
	while (true) {
		int cnt = 0;
		scanf("%d", &n);
		if (n==0) {
			break;
		}
		//arr = new int[n*2];
		//fill_n(arr, arr+(n*2), 0);
		for (int i=2;i<=2*n;i++) {
			if (arr[i]==0) {
				arr[i]=0;
			}
			for (int j=i+i;j<=2*n;j+=i) {
				if (arr[j]!=1) {
					arr[j]=1;
				}
			}
		}
		for (int i=n+1;i<=2*n;i++) {
			if (arr[i]==0) {
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
}