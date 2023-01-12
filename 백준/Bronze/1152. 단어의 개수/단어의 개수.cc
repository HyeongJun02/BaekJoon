#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning (disable:4996)

int main() {
    int cnt = 0;
    char inp[1000000];
    bool flag = false;

    scanf("%[^\n]", inp);

    for (int i = 0; i < strlen(inp); i++) {
        //printf("test\n");
        if (inp[i] != ' ') {
            flag = true;
        }
        if (flag == true) {
            if (inp[i] == ' ') {
                cnt++;
                flag = false;
            }
            else {
                continue;
            }
        }
    }
    if (flag == true) {
        cnt++;
    }

    printf("%d\n", cnt);
}
