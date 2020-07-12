#include<stdio.h>
#include<stdlib.h>

int main()
{
    int year=0;

    scanf("%d", &year);
    
    if(year%400==0||(year%4==0 && year%100!=0))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}