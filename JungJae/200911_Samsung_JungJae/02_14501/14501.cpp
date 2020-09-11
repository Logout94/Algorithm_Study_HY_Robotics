#include <iostream>

using namespace std;

int main()
{
    int N; // 1~15
    scanf("%d", &N);

    int days = 0;
    int max[N], temp[N];
    int time[N], price[N]; // time: 1~5, price: 1~1000

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &time[i], &price[i]);
        max[i] = 0;
        temp[i] = 0;
    }

    /*
    printf("%d\n", N);
    for (int i = 0; i < N; i++)
    {
        printf("%d %d\n", time[i], price[i]);
    }
    */
    
    for (int i = N-1; i >= 0; i--)
    {
        if (i != N-1) max[i] = max[i+1];

        days = i+time[i];
        if (days < N) temp[i] = price[i] + max[days];
        else if (days == N) temp[i] = price[i];

        max[i] = (temp[i] >= max[i]) ? temp[i]:max[i];
    }
    printf("%d\n", max[0]);

    return 0;
}