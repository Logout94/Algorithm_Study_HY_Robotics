#include <stdio.h>
#include <string.h>

int check_croa(const char s1, const char s2, const char s3){

    int res = 0;

    if(s1 == 'c' && s2 == '=')  res = 1;
    else if(s1 == 'c' && s2 == '-')  res = 1;
    else if(s1 == 'd' && s2 == 'z'&& s3 == '=')  res = 2;
    else if(s1 == 'd' && s2 == '-')  res = 1;
    else if(s1 == 'l' && s2 == 'j')  res = 1;
    else if(s1 == 'n' && s2 == 'j')  res = 1;        
    else if(s1 == 's' && s2 == '=')  res = 1;
    else if(s1 == 'z' && s2 == '=')  res = 1;        

    return res;
}


int main(){
    char str[101];
    int len;
    scanf("%s", str);
    len = strlen(str);

    //printf("%s, %d\n", str, len);

    int cnt = len;
    int i;
    int res;

    for(i=0; i<len-1; i++){
        res = check_croa(str[i], str[i+1], str[i+2]);
        cnt -= res;
        //printf("%c %c %c %d\n", str[i], str[i+1], str[i+2], res);
        i += res;
    }

    printf("%d", cnt);


    return 0;
}