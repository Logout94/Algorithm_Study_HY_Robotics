#include <stdio.h>
#include <string.h>

#define AaOFFSET 'A' - 'a'

int main()
{
    char str[1000000];
    int count[26] = {0};
    int len;
    int alphabet = 'a';

    int max, ans;
    int repeated = 0;

    scanf("%s", str);
    len = strlen(str);

    // printf("str: %s\nlen: %d\n\n", str, len);

    for (int i = 0; i < 'z'-'a'+1; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if ('a' <= str[j] && str[j] <= 'z' && str[j] == alphabet)
            {
                count[alphabet-'a']++;
            }
            else if ('A' <= str[j] && str[j] <= 'Z' && str[j] == alphabet+AaOFFSET)
            {
                count[alphabet-'a']++;
            }
        }
        alphabet++;
    }

    max = 0;
    for (int i = 0; i < sizeof(count)/sizeof(int); i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            ans = i+'a'+AaOFFSET;

            repeated = 0;
        }
        else if (count[i] == max && max > 0)
        {
            repeated = 1;
        }
    }
    if (repeated == 1) printf("?\n");
    else printf("%c\n", ans);

    return 0;
}