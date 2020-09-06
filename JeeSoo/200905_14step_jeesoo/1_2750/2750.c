#include <stdio.h>
#include <stdlib.h> // qsort 

int compare(const void *a, const void *b){
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if(num1 < num2) return -1;
    if(num1 > num2) return  1;
    return 0;
}

int main(){

    int n;
    scanf("%d", &n);

    int num[1000];
    
    int i;
    for(i=0; i<n; i++){
        scanf("%d",num+i);
    }

    qsort(num, n, sizeof(int), compare);

    for(i=0; i<n; i++){
        printf("%d\n",num[i]);
    }

    return 0;
}