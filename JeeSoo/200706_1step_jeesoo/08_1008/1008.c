#include <stdio.h>

int main(){

    int a, b;

    scanf("%d %d", &a, &b);

    double ret = (double)a / b;

    printf("%.16lf", ret);

    return 0;
}
