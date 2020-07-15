#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned char num=0;

    scanf("%d", &num);

    for(int i=1; i<10; i++)
    {
        printf("%d * %d = %d\n", num, i, num*i);
    }

    return 0;
}