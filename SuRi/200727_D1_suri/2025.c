//2025
#include <stdio.h>

int t,sum;

int main(){
	scanf("%d",&t);
	
	for(int i=1; i<=t; i++){
		sum += i;
	}
	printf("%d\n",sum);

}