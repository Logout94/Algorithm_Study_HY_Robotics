//2058
#include <stdio.h>

int n,sum=0;

int main(){
	scanf("%d",&n);
	
	while(1){
		
		
		if(n==0){
			break;
		}
		else{
			sum += n % 10;
			n= n/10;
		}
	}
	printf("%d",sum);
	
}