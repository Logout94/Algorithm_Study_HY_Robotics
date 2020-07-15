#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N=0;
    int cnt=1;

    scanf("%d", &N);

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N-cnt; j++)
        {
            printf(" ");
        }

        for(int j=0; j<cnt; j++)
        {
            printf("*");
        }
        printf("\n");
        cnt++;
    } 
}