#include <stdio.h>
#include <string.h>

int check_num(const char c){

    if( c >='A' && c<= 'C') return 3;
    else if( c >='D' && c<= 'F') return 4;
    else if( c >='G' && c<= 'I') return 5;
    else if( c >='J' && c<= 'L') return 6;
    else if( c >='M' && c<= 'O') return 7;
    else if( c >='P' && c<= 'S') return 8;
    else if( c >='T' && c<= 'V') return 9;
    else if( c >='W' && c<= 'Z') return 10;

}


int main(){

    char str[16];
    int len;
    scanf("%s", str);
    len = strlen(str);
    
    //printf("%s, %d\n", str, len);

    int i = 0, sum=0;
    for(i=0; i<len; i++){
        sum += check_num(str[i]);
    }

    printf("%d",sum);

    return 0;
}