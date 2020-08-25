#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N=0, X=0;

    scanf("%d %d", &N, &X);

    for(int i=0; i<N; i++)
    {
        int tmp=0;
        scanf("%d", &tmp);

        if(X > tmp)
        {
            printf("%d ", tmp);
        }
    }
    printf("\n");

    return 0;
}