#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 10000 //1000000000

int compare(const void *a, const void *b){
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if(num1 < num2) return  1;
    if(num1 > num2) return -1;
    return 0;
}


int main(){

    char *num_ch = (char*)malloc(MAX_LEN+1);
    int *num = (int*)malloc(MAX_LEN);

    scanf("%s", num_ch);
    int str_len = strlen(num_ch);

    int i;
    for(i=0; i<str_len; i++){
        num[i] = *(num_ch+i)-'0';
        //printf("%d" , num[i]);
    }

    qsort(num, str_len, sizeof(int), compare);

    for(i=0; i<str_len; i++){
        printf("%d", num[i]);
    }

    free(num_ch);
    free(num);

    return 0;
}