#include <stdio.h>
#include <iostream>
#include <string>

#pragma warning (disable:4996)

using namespace std;

int main() {
    string s;
    char ans[1111];
    int k;

    scanf("%d", &k);
    cin >> s;

    int n = s.size();
    int c = n / 2;
    string t = s;
    int cnt = 0;

    while (1) {
        string temp = "";
        cnt++;
        for (int i = 0; i <= c; i++) {
            temp += t[i];
            if (s[n - 1 - i]) {
                temp += t[n - 1 - i];
            }
        }
        for (int i = 0; i < n; i++) {
            t[i] = temp[i];
        }
        if (s == t) {
            break;
        }
    }

    k %= cnt;

    while (k--) {
        int l = 0, r = n - 1;
        for (int i = 0; i < n; i++) {
            if (i & 1) {
                ans[r--] = s[i];
            }
            else {
                ans[l++] = s[i];
            }
        }
        for (int i = 0; i < n; i++) {
            s[i] = ans[i];
        }
    }
    cout << s;
}