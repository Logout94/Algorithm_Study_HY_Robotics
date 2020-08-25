#include <stdio.h>
#include <stdlib.h>

int comp(const void * a, const void *  b){
    int f = *((int*)a);
    int s = *((int*)b);
    if(f > s)   return 1;
    if(f < s)   return -1;
    return 0;
}

int main(){
    int num;
    int i, j, max;
    int val[199];

    scanf("%d", &num);

    for (i = 0; i<num; i++){
        scanf("%d", val+i);
    }
    qsort(val, num, sizeof(int), comp);
    printf("%d", val[num/2]);
}