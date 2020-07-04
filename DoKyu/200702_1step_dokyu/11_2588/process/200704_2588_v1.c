#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x=0, y=0;
    char buf[3];
    scanf("%d", &x);
    scanf("%d",&y);
    sprintf(buf, "%d", y); 
    printf("%d\n", x*(buf[2]-48));
    printf("%d\n", x*(buf[1]-48));
    printf("%d\n", x*(buf[0]-48));
    printf("%d\n", x*y);
    return 0;
}