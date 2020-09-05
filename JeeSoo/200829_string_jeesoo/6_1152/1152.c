#include <stdio.h>
#include <string.h>

int main(){

    char str[1000001];

    scanf("%[^\n]", str);
    int len = strlen(str);

    int word_cnt = 0;
    char ch[2];

    if(str[0] == ' '){
        word_cnt--;
    }


    for(int i = 0; i<len-1; i++){
        
        ch[0] = str[i];
        ch[1] = str[i+1];
        
        //printf("%c %c\n", ch[0], ch[1]);

        if(ch[0] == ' ' && ch[1] !=' '){
            word_cnt++;
        }

    }
    word_cnt++;

    printf("%d", word_cnt);

    return 0;
}