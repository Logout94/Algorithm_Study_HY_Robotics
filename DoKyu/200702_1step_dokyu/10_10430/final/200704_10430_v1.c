#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x=0, y=0, z=0;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d\n", (x+y)%z);
    printf("%d\n", ((x%z)+(y%z))%z);
    printf("%d\n", (x*y)%z);
    printf("%d\n", ((x%z)*(y%z))%z);

    return 0;
}