#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *a, const void *b){
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if(num1 < num2) return -1;
    if(num1 > num2) return  1;
    return 0;
}

int main(){

    int N;
    scanf("%d", &N);

    int num[500000]={0};
    int num_val[8001]={0};
    
    int cal_sum = 0;

    int i;
    int min = 4000, max = -4000;

    for(i=0; i<N; i++){
        scanf("%d", num+i);
        cal_sum += num[i];

        num_val[num[i]+4000]++;

        if(min > num[i])    min = num[i];
        if(max < num[i])    max = num[i];
    }

    printf("%.0f\n", (double)cal_sum/N);

    qsort(num, N, sizeof(int), compare);
    printf("%d\n", num[N/2]);

    int cnt_max = 0;
    int num_max = 0;
    int cnt_bin[1000]={0};

    int bin_num = 0;
    int bin_cnt = 0;

    for(i=0; i<8001; i++){
        if(cnt_max < num_val[i]){
            cnt_max = num_val[i];
            bin_cnt = 1;
            bin_num = 0;
            cnt_bin[bin_num] = i-4000; 
        }else if(cnt_max == num_val[i]){
            bin_num++;
            cnt_bin[bin_num] = i-4000; 
            bin_cnt++;
        }
    }

/*
    printf("[%d]\n", bin_cnt);
    for(i=0; i<bin_cnt; i++){
        printf("  %d\n", cnt_bin[i]); 
    }
*/

    qsort(cnt_bin, bin_cnt, sizeof(int), compare);

    if(bin_cnt > 1)
        printf("%d\n", cnt_bin[1]);
    else
        printf("%d\n", cnt_bin[0]);


    printf("%d\n", max - min);

    return 0;
}