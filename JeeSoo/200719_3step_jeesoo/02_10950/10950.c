#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    int i, a, b;

    for(i = 0 ; i < t; i++ ){
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    return 0;
}