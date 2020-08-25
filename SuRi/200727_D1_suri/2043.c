//2043
#include <stdio.h>

int p,k;

int main(){
	scanf("%d %d",&p,&k);
	
	int cnt=0;
	
	while(1){
		if(p>k){
			cnt++;
			k++;
		}
		else if(p==k){
			cnt++;
			break;
		}
	}
	printf("%d",cnt);
	
}