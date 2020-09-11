#include <iostream>

using namespace std;

int main()
{
    long long int ans = 0;

    int N;
    scanf("%d", &N);

    int a[N];
    int b, c;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d %d", &b, &c);

    /*
    printf("%d\n", N);
    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("%d %d\n", b, c);
    */

    int temp;
    for (int i = 0; i < N; i++)
    {
        if ((a[i]-b) <= 0) temp = 1;
        else
        {
            if ((a[i]-b)%c == 0) temp = (a[i]-b)/c + 1;
            else temp = (a[i]-b)/c +2;
        }

        ans += temp;
    }
    printf("%lld\n", ans);

    return 0;
}