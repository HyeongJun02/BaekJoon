#pragma warning (disable:4996)
using namespace std;

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    int day;
    int month;
    int year;
};

bool compareBirthday(const Student& a, const Student& b) {
    if (a.year != b.year) {
        return a.year < b.year;
    }
    else if (a.month != b.month) {
        return a.month < b.month;
    }
    return a.day < b.day;
}

int main() {
    int n;
    cin >> n;

    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].day >> students[i].month >> students[i].year;
    }

    sort(students.begin(), students.end(), compareBirthday);

    cout << students.back().name << endl;
    cout << students.front().name << endl;

    return 0;
}
