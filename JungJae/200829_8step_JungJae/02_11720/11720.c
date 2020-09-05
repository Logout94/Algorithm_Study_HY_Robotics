#include <stdio.h>

int main()
{
    int N;
    char num[256];
    int sum = 0;

    scanf("%d", &N);
    scanf("%s", &num);

    // printf("N: %d, num: %s\n", N, num);

    int temp;
    for (int i = 0; i < N; i++)
    {
        temp = num[i] - 48;
        sum += temp;

        // printf("temp: %d\n", temp);
    }

    printf("%d\n", sum);

    return 0;
}  