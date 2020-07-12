#include<stdio.h>
#include<stdlib.h>

typedef struct _time
{
    unsigned char hour;
    unsigned char min;
}Time;

int main()
{
    Time t;
    char hc=0;

    scanf("%d %d", &t.hour, &t.min);

    if(t.min < 45)
    {
        t.min = 15+t.min;
        hc=1;
    }
    else
    {
        t.min = t.min - 45;
    }

    if(hc) 
    {
        if(t.hour == 0)
        {
            t.hour = 23;
        }
        else
        {
            t.hour = t.hour - 1;
        }
    }

    printf("%d %d\n", t.hour, t.min);

    return 0;
    
}