#include <stdio.h>

#define MAX 100

int main(){

    int n;
    char str[MAX+1];
    int sum = 0;

    scanf("%d", &n);
    scanf("%s", str);

    //printf("%s\n", str);

    for(int i=0; i<n; i++){
        sum += (str[i]-'0');
    }

    printf("%d\n", sum);

    return 0;
}



/*
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    char * str;
    int sum = 0;

    scanf("%d", &n);

    scanf("%s", str);

    printf("%s\n", str);

    for(int i=0; i<n; i++){
        //printf("%d\n", *(str+i)-'0');
        sum += (*(str+i)-'0');
    }

    printf("%d\n", sum);

    return 0;
}
*/