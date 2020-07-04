#include <stdio.h>

double a, b;

int main(){
    scanf("%lf %lf",&a, &b);
    
    printf("%.9lf", a/b);
}