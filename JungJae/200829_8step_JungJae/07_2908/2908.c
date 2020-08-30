#include <stdio.h>

int main()
{
    int A, B, invA, invB, tempA, tempB;

    scanf("%d %d", &A, &B);
    
    invA = 0;
    invB = 0;
    for (int i = 0; i < 3; i++)
    {
        tempA = A%10;
        A /= 10;
        invA *= 10;
        invA += tempA*10;

        tempB = B%10;
        B /= 10;
        invB *= 10;
        invB += tempB*10;

        if (A < 10)
        {
            invA += A;
            invB += B;
            break;
        }
    }

    if (invA > invB) printf("%d\n", invA);
    else printf("%d\n", invB);

    return 0;
}