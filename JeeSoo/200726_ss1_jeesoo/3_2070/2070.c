#include <stdio.h>

int main(){
    int num;
    int i, a, b;

    scanf("%d", &num);

    for (i = 0; i<num; i++){
        scanf("%d %d", &a, &b);

        if(a > b)
            printf("#%d >\n", i+1);
        else if (a == b)
            printf("#%d =\n", i+1);
        else
            printf("#%d <\n", i+1);
        
    }
}