#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

#pragma warning (disable:4996)

int main() {
    string a;
    int cnt = 0;
    getline(cin, a);
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == 'c') {
            if (a[i + 1] == '=') {
                cnt++;
                i++;
            }
            else if (a[i + 1] == '-') {
                cnt++;
                i++;
            }
            else cnt++;
        }
        else if (a[i] == 'd') {
            if (a[i + 1] == 'z') {
                if (a[i + 2] == '=') {
                    cnt++;
                    i += 2;
                }
                else {
                    cnt += 2;
                    i++;
                }
            }
            else if (a[i + 1] == '-') {
                cnt++;
                i++;
            }
            else cnt++;
        }
        else if (a[i] == 'l') {
            if (a[i + 1] == 'j') {
                cnt++;
                i++;
            }
            else cnt++;
        }
        else if (a[i] == 'n') {
            if (a[i + 1] == 'j') {
                cnt++;
                i++;
            }
            else cnt++;
        }
        else if (a[i] == 's') {
            if (a[i + 1] == '=') {
                cnt++;
                i++;
            }
            else cnt++;
        }
        else if (a[i] == 'z') {
            if (a[i + 1] == '=') {
                cnt++;
                i++;
            }
            else cnt++;
        }
        else cnt++;
    }
    printf("%d\n", cnt);
}