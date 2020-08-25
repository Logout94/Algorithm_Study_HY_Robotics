#include <stdio.h>

int main(){

    int test_case;

    scanf("%d", &test_case);

    int a, b, i;

    for(i=0; i<test_case; i++){
        scanf("%d %d", &a, &b);

        printf("#%d %d %d\n", (i+1), a/b, a%b);

    }
    return 0;
}