#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

#pragma warning (disable:4996)

int main() {
    int N, res = 0;
    char* num;
    scanf("%d", &N);
    num = new char[N];
    scanf("%s", num);
    for (int i = 0; i < N; i++) res += (int)num[i] - 48;
    printf("%d", res);
}