#pragma warning (disable:4996)

#include <iostream>

#define LENGTH 10
#define SIZE 101

using namespace std;

int main() {
    int n;
    int sum = 0;
    int area[SIZE][SIZE] = { 0, };
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        for (int i = 0; i < LENGTH; i++) {
            for (int j = 0; j < LENGTH; j++) {
                area[x + i][y + j]++;
            }
        }
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (area[i][j] > 0) sum += 1;
        }
    }
    cout << sum << endl;
    return 0;
}