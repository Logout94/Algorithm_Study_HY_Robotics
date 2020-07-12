#include<stdio.h>
#include<stdlib.h>

typedef struct _dot{
    int x;
    int y;
} Dot;

int main()
{
    Dot dot;
    char res=0;    
    scanf("%d %d", &dot.x, &dot.y);

    if(dot.x > 0 && dot.y)
    {
        res = 1;
    }
    if(dot.x < 0 && dot.y > 0)
    {
        res = 2;
    }
    if(dot.x < 0 && dot.y < 0)
    {
        res = 3;
    }
    if (dot.x > 0 && dot.y < 0)
    {
        res = 4;
    }

    printf("%d\n", res);

    return 0;
}