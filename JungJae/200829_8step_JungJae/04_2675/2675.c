#include <stdio.h>
#include <string.h>

int main()
{
    int T, len;
    int R[1000];
    char str[1000][20];
    char ans[1000][200];

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %s", &R[i], str[i]);

        len = strlen(str[i]);
        for (int j = 0; j < len; j++)
        {
            for (int k = 0; k < R[i]; k++)
            {
                ans[i][j*R[i]+k] = str[i][j];
            }
        }
    }

    for (int i = 0; i < T; i++)
    {
        printf("%s\n", ans[i]);
    }

/*
    printf("T: %d\n", T);
    for (int i = 0; i < T; i++)
    {
        printf("[%d] %d %s\n", i, R[i], str[i]);
    }
*/
    return 0;
}