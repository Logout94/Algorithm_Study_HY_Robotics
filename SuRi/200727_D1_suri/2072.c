#include <stdio.h>

int T;
int arr[11];
int ans[10000];

int main( ){
    scanf("%d",&T);
    
    for(int i=1; i<=T; i++){
    	for(int j=1; j<11; j++){
        	
			scanf("%d",&arr[j]);
             
			  if(arr[j] % 2 ==1){
            	ans[i] += arr[j];
            }
        }
           
    }
    for(int i=1; i<=T; i++){
    	printf("#%d %d\n",i, ans[i]);
	}
}