#include <stdio.h>

int main(){

    int a, b;

    scanf("%d %d", &a, &b);

    if ( (a == 1 && b == 2) || (a == 2 && b == 3) || (a == 3 && b == 1) ) 
        printf("B");
    else if( (b == 1 && a == 2) || (b == 2 && a == 3) || (b == 3 && a == 1) )
        printf("A");


    return 0;
}