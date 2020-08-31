#include <stdio.h>
#include <string.h>

void print(char * arr){

    int i = 0;

    for(i=0; i<26;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

}

void check_idx(char * word, char* en){

    int idx = 0;
    int tmp = 0;
    
    while( word[idx] != 0 ){

        tmp = word[idx] - 'a';
        
        if(en[tmp] == -1){
            en[tmp] = idx;
        }

        idx++;
    }   

}

int main(){

    char en[26];
    memset(en, -1,sizeof(en));

    //print(en);

    char str[101];
    scanf("%s", str);
    //printf("%s\n",str);

    check_idx(str, en);

    print(en);

    return 0;
}