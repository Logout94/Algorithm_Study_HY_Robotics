#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x=0;

    scanf("%d", &x);

    for(int i=x; i>0; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}