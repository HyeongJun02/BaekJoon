#pragma warning(disable: 4996)
using namespace std;

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>

struct PeopleInfo {
    int number;
    char name[101];
    int age;
};

vector<PeopleInfo> people;

bool comparePeople(const PeopleInfo& a, const PeopleInfo& b) {
    if (a.age != b.age) {
        return a.age < b.age;
    }
    else {
        return a.number < b.number;
    }
}

int main() {
    int testCase;
    scanf("%d", &testCase);

    // 빠른 입출력
    people.reserve(testCase);  // 미리 벡터의 크기를 예약하여 성능 향상

    for (int i = 0; i < testCase; i++) {
        PeopleInfo newPeople;
        scanf("%d %s", &newPeople.age, newPeople.name);
        newPeople.number = i;
        people.push_back(newPeople);
    }

    // 정렬
    sort(people.begin(), people.end(), comparePeople);

    // 출력 최적화
    for (int i = 0; i < testCase; i++) {
        printf("%d %s\n", people[i].age, people[i].name);
    }

    return 0;
}