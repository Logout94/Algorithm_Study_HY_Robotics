#include <stdio.h>
#include <math.h>

int main(){
    int num;
    int i, j, sum, cnt;
    int val[10];

    scanf("%d", &num);

    for (i = 0; i<num; i++){
        scanf("%d %d %d %d %d %d %d %d %d %d", 
        &val[0], &val[1], &val[2], &val[3], &val[4], &val[5], &val[6], &val[7], &val[8], &val[9]);

        sum = 0;
        cnt = 0;
        for(j = 0; j < 10; j++){
            sum += val[j];
            cnt++; 
        }
        int ret = floor( (float)sum/cnt + 0.5 );
        printf("#%d %d\n", i+1, ret);
    }
}