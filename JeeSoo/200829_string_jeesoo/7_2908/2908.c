#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void switch_character(char* s){
    char tmp = s[0];
    s[0] = s[2];
    s[2] = tmp;
}

int main(){

    char sA[4], sB[4];

    scanf("%s %s", sA, sB);
    //printf("%s %s\n", sA, sB);

    switch_character(sA);
    switch_character(sB);
    //printf("%s %s\n", sA, sB);

    int A = atoi(sA);
    int B = atoi(sB);

    if(A > B){
        printf("%d", A);
    }else{
        printf("%d", B);
    }

    return 0;
}