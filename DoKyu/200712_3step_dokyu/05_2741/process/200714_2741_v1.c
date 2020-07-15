#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x=0;

    scanf("%d", &x);

    for(int i=0; i<x; i++)
    {
        printf("%d\n", i+1);
    }

    return 0;
}