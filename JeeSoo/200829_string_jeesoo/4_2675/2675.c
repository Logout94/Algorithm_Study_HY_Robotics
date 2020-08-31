#include <stdio.h>
#include <string.h>

void print_mul(int R, char c, char* res){
    int t = 0;
    char tm[2];
    tm[0] = c;
    //printf("%c :\n", c);

    for(t=0; t<R; t++){
        strcat(res, tm);
        //printf("%s\n", res);
    }

    //printf("%s", res);
}

int main(){
    
    int T;
    scanf("%d", &T);

    int R;
    char S[21];
    char P[255];

    int i, idx = 0;
    for(i=0; i< T; i++){
        scanf("%d %s", &R, S);

        //printf("%d %s\n", R, S);
        memset(&P, 0, sizeof(S));
        while( S[idx] != 0){
            print_mul(R, S[idx], P);
            idx++;
        }
        printf("%s\n", P);
        idx = 0;
    }
    return 0;
}