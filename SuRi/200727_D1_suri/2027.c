//2027
#include <stdio.h>

char out[5][5];

int main(){
	
	for(int i=0; i<5 ;i++){
		for(int j=0; j<5 ;j++){
			
			if(i==j){
				out[i][j]='#';
			}
			else{
				out[i][j]= '+';
			}
			printf("%c",out[i][j]);
		}
			printf("\n");
	}
}