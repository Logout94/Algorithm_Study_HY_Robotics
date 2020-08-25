#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x=0;
    int cnt=1;
    int sum=1;

    scanf("%d", &x);

    for(int i=0; i<(x*(x+1)/2); i++)
    {

        if(i==sum)
        {
            cnt++;
            printf("\n");
            sum = cnt*(cnt+1)/2;
        }
        printf("*");
    }
    printf("\n");

    return 0;
}