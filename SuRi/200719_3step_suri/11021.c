#include <stdio.h>

int a,b;
int t;

int main(){
    scanf("%d",&t);
    
    for(int i=1; i<=t; i++){
        scanf("%d %d",&a, &b);
        printf("Case #%d: %d\n",i,a+b);
    }
    
    
}