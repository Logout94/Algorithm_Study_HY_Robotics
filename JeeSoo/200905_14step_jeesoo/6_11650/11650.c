#include <stdio.h>
#include <stdlib.h>

typedef struct point{
    int x;
    int y;
}point;


int compare(const void *a, const void *b){
    point num1 = *(point*)a;
    point num2 = *(point*)b;

    if(num1.x < num2.x) return  -1;
    else if(num1.x > num2.x) return 1;
    else {
        if(num1.y < num2.y) return  -1;
        else if(num1.y > num2.y) return 1;

    }
    return 0;
}


int main(){

    int N;
    scanf("%d", &N);

    point num[100000];

    int i;
    for(i=0; i<N; i++){
        scanf("%d %d", &num[i].x, &num[i].y);
    }

    qsort(num, N, sizeof(point), compare);

    for(i=0; i<N; i++){
        printf("%d %d\n", num[i].x, num[i].y);
    }

    return 0;
}