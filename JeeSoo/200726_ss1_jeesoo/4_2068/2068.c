#include <stdio.h>

int main(){
    int num;
    int i, j, max;
    int val[10];

    scanf("%d", &num);

    for (i = 0; i<num; i++){
        scanf("%d %d %d %d %d %d %d %d %d %d", 
        &val[0], &val[1], &val[2], &val[3], &val[4], &val[5], &val[6], &val[7], &val[8], &val[9]);

        max = 0;
        for(j = 0; j < 10; j++){
            if(max < val[j])
                max = val[j];
        }
        printf("#%d %d\n", i+1, max);
    }
}