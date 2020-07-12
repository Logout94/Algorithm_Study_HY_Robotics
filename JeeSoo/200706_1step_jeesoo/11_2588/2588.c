#include <stdio.h>

int main(){

    int a, b;

    scanf("%d %d", &a, &b);

    int tmp1 = (b%10);
    int tmp2 = (b%100)/10;

    printf("%d\n", a*tmp1);
    printf("%d\n", a*tmp2);
    printf("%d\n", a*(b/100));
    printf("%d\n", a*b);

    return 0;
}
