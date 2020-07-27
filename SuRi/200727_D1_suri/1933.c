////1933
#include <stdio.h>

int n;

int main(){
	scanf("%d",&n);
	
	
	for(int i=1; i<=n; i++){
		
	
		if(n%i==0){
			printf("%d ",i);		
		}
	}

}