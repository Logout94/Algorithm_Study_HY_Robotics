#include <stdio.h>
#include <string.h>

int main(){

    int cnt[26] = {0,};
    char str[1000001];
    scanf("%s", str);

    //printf("%s", str);
    int len = strlen(str);

    int i = 0;
    for(i = 0; i<len ; i++){
        if( str[i] >= 'a' && str[i] <='z'){
            int idx = str[i] - 'a';
            cnt[idx]++;
        }else{
            int idx = str[i] - 'A';
            cnt[idx]++;
        }
    }

    int max_num = 0;
    int max_i = 0;
    int max_cnt = 0;

    for(i = 0; i <26 ; i++){
        //printf("%d ",cnt[i]);
        if(max_num < cnt[i]){
            max_i = i;
            max_num = cnt[i];
            max_cnt = 1;
        }else if(max_num == cnt[i] && max_num > 0){
            max_cnt++;
        }
    }

    if(max_cnt > 1){
        printf("?");
    }else{
        printf("%c", (max_i + 'A'));
    }

    return 0;
}