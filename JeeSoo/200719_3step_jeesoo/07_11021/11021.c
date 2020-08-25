#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    int i, a, b;

    for(i = 1 ; i <= t; i++ ){
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a+b);
    }

    return 0;
}