#include <stdio.h>
#include <string.h>

#pragma warning (disable:4996)

int main()
{
    int T, n, res;
    char dis[1000], bef;

    res = 0;

    scanf("%s", dis);

    for (int j = 0; j < strlen(dis); j++) {
        if (j == 0) {
            res += 10;
            bef = dis[j];
        }
        else {
            if (bef == dis[j]) {
                res += 5;
            }
            else {
                res += 10;
            }
            bef = dis[j];
        }
    }
    printf("%d\n", res);
}
