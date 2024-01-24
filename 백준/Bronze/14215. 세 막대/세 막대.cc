#pragma warning (disable:4996)
using namespace std;

#include <stdio.h>
#include <vector>
#include <algorithm>

void nl(int n) {
    for (int i = 0; i < n; i++) {
        printf("\n");
    }
}

int main() {
    vector<int>v;
    int tmp;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &tmp);
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    int ab = v[0] + v[1];
    if (v[2] >= ab)
        v[2] = ab - 1;
    printf("%d", v[0] + v[1] + v[2]);
    /*
    for (int i = 0; i < v.size(); i++) {
        printf("%d ", v[i]);
    }
    nl(1);
    */
}