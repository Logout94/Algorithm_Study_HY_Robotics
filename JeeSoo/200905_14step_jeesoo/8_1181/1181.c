#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct word{
    int str_len;
    char str[51]; 
}word;


int compare(const void *a, const void *b){
    word num1 = *(word*)a;
    word num2 = *(word*)b;

    if(num1.str_len < num2.str_len) return  -1;
    else if(num1.str_len > num2.str_len) return 1;
    else {
        if( strcmp( num1.str, num2.str) < 0 ) return  -1;
        else if( strcmp( num1.str, num2.str) > 0 ) return 1;

    }
    return 0;
}



int main(){

    int N;
    scanf("%d", &N);

    word wd[20000];

    int i;
    for(i=0; i<N; i++){
        scanf("%s", &wd[i].str);
        wd[i].str_len = strlen(wd[i].str);
    }

    qsort(wd, N, sizeof(word), compare);

    for(i=0; i<N; i++){
        if(strcmp( wd[i-1].str, wd[i].str) == 0 )
            continue;

        printf("%s\n", wd[i].str);
    }
    return 0;
}