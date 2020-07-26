#include <stdio.h>

int main(){

    int num, i;
    scanf("%d", &num);

    for(i=num; i>=0; i--){
        printf("%d ", i);
    }


    return 0;
}