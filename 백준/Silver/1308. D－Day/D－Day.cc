#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// 일수로 바꿔서 계산한 후 윤년이 있던 개수만큼 답에 증가한다.

struct date {
    int year;
    int month;
    int day;
};
int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int leapyear(date d1, date d2) { // 윤년 개수 구하기
    int cnt = 0;
    if (d1.month > 2) { d1.year++; }
    if (d2.month > 2) { d2.year++; }
    for (int i = d1.year; i < d2.year; i++) {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) { cnt++; }
    }
    return cnt;
}

int yeartoday(date d) { // 년월일을 일수로 바꾸기
    int date = 0;
    date += d.year * 365;
    for (int i = 0; i < d.month - 1; i++) { date += months[i]; }
    date += d.day;
    return date;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    date d, dday;
    int day1, day2, ans = 0;
    cin >> d.year >> d.month >> d.day;
    cin >> dday.year >> dday.month >> dday.day;

    day1 = yeartoday(d);
    day2 = yeartoday(dday);

    ans = day2 - day1;
    ans += leapyear(d, dday);

    if (ans >= 365243) { cout << "gg"; } // 1년은 365.2422일
    else { cout << "D-" << ans; }

    return 0;
}