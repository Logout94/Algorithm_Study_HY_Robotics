#include <stdio.h>
#include <string.h>


int check_group(char *s, int len){
    int ch[26] = {0,};

    int _i=0;
    int prev_i = -1;

    for(_i=0; _i<len; _i++){

        int idx = s[_i]-'a';

        if(ch[idx] == 0 && prev_i != idx){
            ch[idx] = 1;
            prev_i = idx;
        }else if(prev_i == idx){
            continue;
        }
        else if (ch[idx] == 1){
            return 0;
        }
    }
    return 1;
}

int main(){
    int N;
    scanf("%d", &N);

    int i;
    int cnt = 0;
    char word[101];

    for(i=0; i<N; i++){
        scanf("%s",word);
        int len = strlen(word);
        int res = check_group(word, len);
        cnt += res;
        //printf("%s %d\n",word, res);
    }
    printf("%d\n", cnt);
    return 0;
}