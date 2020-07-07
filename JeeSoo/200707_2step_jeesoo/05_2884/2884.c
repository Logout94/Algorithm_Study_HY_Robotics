#include <stdio.h>

int main(){

    int h, m;

    scanf("%d %d", &h, &m);

    if( m-45 < 0 && h>0)
        printf("%d %d",h-1, m+15);

    else if( m-45 < 0 && h==0)
        printf("%d %d",h+23, m+15);

    if( m-45 >= 0 && h>=0)
        printf("%d %d",h, m-45);

    return 0;
}