#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    int sum = 0;
    int i;
    for(i = 1 ; i <= t; i++ ){
        sum += i;
    }

    printf("%d", sum);

    return 0;
}