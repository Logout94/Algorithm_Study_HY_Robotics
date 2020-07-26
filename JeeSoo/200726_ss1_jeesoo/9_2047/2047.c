#include <stdio.h>

int main(){

    char str[80];

    scanf("%s", str);

    int i;
    for(i = 0; (str[i] != NULL) ; i++){

        if(str[i] >= 97 && str[i] <= 122 )
            printf("%c", str[i]-32);
        else
            printf("%c", str[i]);
    }
}