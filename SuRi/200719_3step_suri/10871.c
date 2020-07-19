#include <stdio.h>

int n,x;
int temp;

int main(){
    scanf("%d %d",&n,&x);
    
    for(int i=1; i<=n ; i++){
        scanf("%d",&temp);
        if(x>temp) printf("%d ",temp);
    }
}