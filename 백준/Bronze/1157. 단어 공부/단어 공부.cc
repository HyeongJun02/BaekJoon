#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

#pragma warning (disable:4996)

int main() {
	string a;
	int cnt[26] = { 0, };
	int bigcnt = 0;
	getline(cin, a);
	for (int i = 0; i < a.length(); i++) {
		a[i] = toupper(a[i]);
		cnt[(int)a[i] - 65]++;
		if (bigcnt < cnt[(int)a[i] - 65]) {
			bigcnt = cnt[(int)a[i] - 65];
		}
	}
	char resChar;
	int resFlag = 0;
	bool flag = true;
	for (int i = 0; i < 26; i++) {
		if (bigcnt == cnt[i]) {
			resFlag++;
			resChar = (char)(i + 65);
			if (resFlag == 2) {
				flag = false;
				break;
			}
		}
	}
	if (flag == true) {
		printf("%c\n", resChar);
	}
	else {
		printf("?\n");
	}
}