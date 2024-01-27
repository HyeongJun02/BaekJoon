#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> coordinate;
void inputCoordinate(int testCase);
void sortVector();
bool compare(pair<int, int> vector1, pair<int, int> vector2);
void print();

int main() {
    int testCase;
    cin >> testCase;

    inputCoordinate(testCase);
    sortVector();
    print();
}

void inputCoordinate(int testCase) {
    int x, y;

    for (int i = 0; i < testCase; i++) {
        cin >> x >> y;
    coordinate.push_back(pair<int, int>(x, y));
    }
}

void sortVector() {
    sort(coordinate.begin(), coordinate.end(), compare);
}

bool compare(pair<int, int> vector1, pair<int, int> vector2) {
    if (vector1.second == vector2.second) {
        return vector1.first < vector2.first;
    }
    else {
        return vector1.second < vector2.second;
    }
}

void print() {
    for (int i = 0; i < coordinate.size(); i++) {
        cout << coordinate[i].first << " " << coordinate[i].second << "\n";
    }
}