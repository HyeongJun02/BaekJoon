#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

#pragma warning (disable:4996)

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int one, two, three;

    one = a % 10;
    two = a % 100 - one;
    three = a - a % 100;
    a = one * 100 + two + three / 100;

    one = b % 10;
    two = b % 100 - one;
    three = b - b % 100;
    b = one * 100 + two + three / 100;

    if (a > b) printf("%d\n", a);
    else printf("%d\n", b);
}