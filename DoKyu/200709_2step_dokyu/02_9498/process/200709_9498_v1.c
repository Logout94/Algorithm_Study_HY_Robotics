#include<stdio.h>
#include<stdlib.h>

int main()
{
    int score=0;

    scanf("%d", &score);

    if(score > 89)
    {
        printf("A\n");
    }
    else if(score <= 89 && score > 79)
    {
        printf("B\n");
    }
    else if(score <= 79 && score > 69)
    {
        printf("C\n");
    }
    else if(score <= 69 && score > 59)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
    
}