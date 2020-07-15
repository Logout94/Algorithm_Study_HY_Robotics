#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T=0;
    int A=0, B=0;

    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }

    return 0;
}

// T, A, B 데이터 타입이 다르면 비교문 후 T가 0으로 바뀜