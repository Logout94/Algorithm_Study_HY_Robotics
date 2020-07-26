#include <stdio.h>

int main(){

    char str[200];

    scanf("%s", str);

    int i;
    for(i = 0; (str[i] != NULL) ; i++){
        printf("%d ", str[i]-64);

    }
}