#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x=0, y=0;

    scanf("%d %d", &x, &y);

    if(x>y)
    {
        printf(">\n");
    }
    else if(x<y)
    {
        printf("<\n");
    }
    else
    {
        printf("==\n");
    }

    return 0;
}