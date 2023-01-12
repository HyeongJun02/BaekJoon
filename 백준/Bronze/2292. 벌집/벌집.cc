#pragma warning (disable:4996)

#include <stdio.h>

int main()
{
    int num, check, var;

    var = 0;
    check = 1;

    scanf("%d", &num);
    
    for (int i = 0;; i++) {
        if (num <= check) {
            printf("%d\n", i + 1);
            break;
        }
        else {
            var = 6 * (i + 1);
            check += var;
        }
    }
}