#include<stdio.h>
#include<stdlib.h>
int return_num(int x, int p);

int main()
{
    int x=0, y=0;
    char buf[3]={48, 48, 48};
    scanf("%d",&x);
    scanf("%d",&y);
    printf("%d\n", x*return_num(y, 1));
    printf("%d\n", x*return_num(y, 2));
    printf("%d\n", x*return_num(y, 3));
    printf("%d\n", x*y);
    return 0;
}

int return_num(int x, int p)
{
    int res=0;
    while(p>0)
    {
        res = x%10;
        x=(x-res)/10;
        p--;
    }

    return res;
}