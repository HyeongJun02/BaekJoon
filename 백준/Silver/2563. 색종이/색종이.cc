#pragma warning (disable:4996)

#include <iostream>
#include <math.h>
#include <vector>

#define LENGTH 10

using namespace std;

vector<pair<int, int>> paper;

int main() {
    int n;
    int sum = 0;
    int area[101][101] = { 0, };
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                area[x + i][y + j]++;
            }
        }
    }
    for (int i = 0; i < 101; i++) {
        for (int j = 0; j < 101; j++) {
            if (area[i][j] > 0) sum += 1;
        }
    }
    cout << sum << endl;
    return 0;
}