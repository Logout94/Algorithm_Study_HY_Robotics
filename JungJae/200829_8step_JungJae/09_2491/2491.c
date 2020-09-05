#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;
    int count = 0;

    scanf("%s", str);
    len = strlen(str);

    int i = 0;
    while(i < len)
    {
        switch (str[i])
        {
        case 'c':
            if (str[i+1] == '=' || str[i+1] == '-') i++;
            break;
        case 'd':
            if (str[i+1] == 'z')
            {
                if (str[i+2] == '=') i+=2;
            }
            else if (str[i+1] == '-') i++;
            break;
        case 'l':
            if (str[i+1] == 'j') i++;
            break;
        case 'n':
            if (str[i+1] == 'j') i++;
            break;
        case 's':
            if (str[i+1] == '=') i++;
            break;
        case 'z':
            if (str[i+1] == '=') i++;
            break;
        default:
            break;
        }
        count++;
        i++;
    }

    printf("%d\n", count);

    return 0;
}