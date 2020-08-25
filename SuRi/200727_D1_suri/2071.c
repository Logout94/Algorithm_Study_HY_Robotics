#include <stdio.h>

int T;
int input[11];
float output[10000];

int main(){
	scanf("%d", &T);
    
    for(int tcase=1; tcase<=T ; tcase++){
    	int sum =0;	
        for( int i=1; i<=10; i++){
            scanf("%d",&input[i]);
            sum += input[i];	
         }
		output[tcase] = (float)sum/10;
     
    }
    for(int i=1; i<=T; i++){
    	printf("#%d %.0f\n",i,output[i]);
    }
  
}