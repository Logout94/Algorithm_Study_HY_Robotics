#include <stdio.h>

int main()
{
    char str[1000000];
    char c, c_pre;
    int count = 0;
    
    c_pre = ' ';
    while(1)
    {
        scanf("%c", &c);

        if (c_pre != ' ')
        {
            if (c == ' ') count++;
        }

        if(c == '\n')
        {
            if (c_pre == ' ') count--;
            break;
        }
        c_pre = c;
    }

    printf("%d\n", count+1);

    return 0;
}