//2068
#include <stdio.h>

int t;
int arr[11];
int max[10000];

int main(){
	scanf("%d",&t);
	
	for(int i=1; i<=t; i++){
		max[i] =0;
		for(int j=1; j<=10;j++){
			scanf("%d",&arr[j]);
			if(arr[j]>max[i]) max[i]=arr[j];
		}
		
	}
	
	for(int i=1; i<=t; i++){
		printf("#%d %d\n",i,max[i]);
	}
}