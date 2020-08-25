#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    int i,j;

    for(j = 1 ; j <= t; j++ ){
        for(i = 1 ; i <= j; i++ ){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}