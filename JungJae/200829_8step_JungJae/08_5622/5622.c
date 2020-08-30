#include <stdio.h>
#include <string.h>

int main()
{
    char str[15];
    int len;

    int time = 0;

    scanf("%s", str);
    len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if ('A'<=str[i] && str[i] <='C')
        {
            str[i] = 2;
        }
        else if ('D'<=str[i] && str[i] <='F')
        {
            str[i] = 3;
        }
        else if ('G'<=str[i] && str[i] <='I')
        {
            str[i] = 4;
        }
        else if ('J'<=str[i] && str[i] <='L')
        {
            str[i] = 5;
        }
        else if ('M'<=str[i] && str[i] <='O')
        {
            str[i] = 6;
        }
        else if ('P'<=str[i] && str[i] <='S')
        {
            str[i] = 7;
        }
        else if ('T'<=str[i] && str[i] <='V')
        {
            str[i] = 8;
        }
        else if ('W'<=str[i] && str[i] <='Z')
        {
            str[i] = 9;
        }
    }

    for (int i = 0; i < len; i++)
    {
        // printf("%d", str[i]);
        time += str[i]+1;
    }

    printf("%d\n", time);

    return 0;
}