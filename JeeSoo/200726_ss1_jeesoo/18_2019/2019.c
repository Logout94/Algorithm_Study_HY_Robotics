#include <stdio.h>

int main(){

    int num,i, cal=1;
    scanf("%d", &num);

    for(i=0; i<=num; i++){
        printf("%d ", cal);
        cal *= 2;
    }

    return 0;
}