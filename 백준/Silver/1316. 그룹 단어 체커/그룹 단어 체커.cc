#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning (disable:4996)

int main() {
    bool alpha[26], flag;
    int N, cnt, ascii;
    char inp[100];

    cnt = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", inp);
        for (int j = 0; j < 26; j++) {
            alpha[j] = true;
        }
        flag = true;
        for (int j = 0; j < strlen(inp); j++) {
            ascii = (int)inp[j] - 97;
            if (j == 0) {
                //printf("1", inp[j]);
                alpha[ascii] = false;
            }
            else {
                if (inp[j - 1] == inp[j]) {
                    //printf("1", inp[j]);
                    continue;
                }
                else {
                    if (alpha[ascii] == false) {
                        //printf("0", inp[j]);
                        flag = false;
                        break;
                    }
                    //printf("1", inp[j]);
                    alpha[ascii] = false;
                }
            }
        }
        //printf("\n");
        if (flag == true) {
            //printf("+\n");
            cnt++;
        }
    }

    printf("%d\n", cnt);
}
