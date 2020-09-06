#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person{
    int  age;
    char *name; 
}person;


int compare(const void *a, const void *b){
    //person num1 = *(person*)a;
    //person num2 = *(person*)b;

    if((*(person*)a).age < (*(person*)b).age) return  -1;
    else if((*(person*)a).age > (*(person*)b).age) return 1;
    else {
        if( &a > &b ) return  -1;
        else if( &a < &b ) return 1;

    }
    return 0;
}

int main(){

    int N;
    scanf("%d", &N);

    person per[100000]; //100000

    int i;
    for(i=0; i<N; i++){
        per[i].name = (char *)malloc(101);
        scanf("%d %s", &per[i].age, per[i].name);
    }

    qsort(per, N, sizeof(struct person), compare);

    for(i=0; i<N; i++){
        printf("%d %s\n", per[i].age, per[i].name);
        free(per[i].name);
    }
    return 0;
}