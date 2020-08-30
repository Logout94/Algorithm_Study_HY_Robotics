#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int ans[26];
    int len;

    scanf("%s", &str);
    len = strlen(str);

    // printf("str: %s\nlen: %d\n\n", str, len);

    for (int i = 0; i < 'z'-'a'+1; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (str[j] == 'a'+i)
            {
                ans[i] = j;
                // printf("ans[i]: %d\n\n", ans[i]);
                break;
            }
            else
            {
                ans[i] = -1;
            }
            
        }
    }

    for (int i = 0; i < sizeof(ans)/sizeof(int); i++)
    {
        printf("%d ", ans[i]);
        // printf("%c: %d\n", i+'a', ans[i]);
    }

    return 0;
}