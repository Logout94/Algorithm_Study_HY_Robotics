#include <stdio.h>

int main(){
    int n, x;
    scanf("%d %d",&n, &x);

    int i, num;
    for(i=0; i < n; i++){
        scanf("%d", &num);

        if(num < x)
        printf("%d ", num);
    }

    return 0;
}