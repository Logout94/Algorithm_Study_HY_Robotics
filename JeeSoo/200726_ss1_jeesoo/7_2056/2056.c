#include <stdio.h>

int check_ymd(const int val){

    int m = (val % 10000) / 100;
    int d = (val % 100); 

    if ( m < 1 || m > 12)
        return -1;
    
    if( (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    && (d <1 || d > 31) )
        return -1;

    if( (m == 9 || m == 11 || m == 4 || m == 6) && (d <1 || d > 30) )
        return -1;
    
    if( (m == 2) && (d <1 || d > 28) )
        return -1;

    return 1;
}

int main(){
    int num;
    scanf("%d", &num);

    int i, val;
    for(i = 0; i < num; i++){
        scanf("%d", &val);
        
        if( check_ymd(val) == 1){
            int y = val / 10000;
            int m = (val % 10000) / 100;
            int d = (val % 100); 
            printf("#%d %04d/%02d/%02d\n",i+1, y, m, d);
        }else{
            printf("#%d -1\n", i+1);
        }
    }
}