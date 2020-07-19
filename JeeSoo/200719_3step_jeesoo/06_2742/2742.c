#include <stdio.h>

int main(){
    unsigned int t;
    scanf("%d",&t);

    int i;

    for(i = t ; i >= 1; i-- ){
        printf("%d\n", i);
    }

    return 0;
}