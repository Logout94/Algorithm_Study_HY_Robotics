#include <stdio.h>

#define MAX_LEN 100001
int cnt[MAX_LEN]={0};

int main(){

    int N, num;
    scanf("%d", &N);

    int i;
    for(i=0; i<N; i++){
        scanf("%d", &num);
        cnt[num]++;
    }
    int j;
    for(i=0; i<= MAX_LEN; i++){ 
        if(cnt[i] == 0)
            continue;
        for(j = 0; j < cnt[i] ; j++){
            printf("%d\n", i );
        }
    }
    return 0;
}