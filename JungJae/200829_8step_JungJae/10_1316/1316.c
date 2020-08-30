#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);

    char str[N][200];
    int len[N];
    int num = 0;

    int temp = 0;
    int failed = 0;
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%s", str[i]);
        len[i] = strlen(str[i]);

        // printf("[%d] %s\n", len[i], str[i]);
        for (int num = 0; num < len[i]; num++)
        {
            for (int j = num+1; j < len[i]; j++)
            {
                if (str[i][num] == str[i][j])
                {
                    if (temp == 1)
                    {
                        failed = 1;
                        // printf("%c %c\n", str[i][num], str[i][j]);
                        break;
                    }
                }
                else temp = 1;
            }
            if (failed == 1) break;
            temp = 0;
        }
        if (failed == 0) count++;
        failed = 0;
    }

    printf("%d\n", count);

    return 0;
}