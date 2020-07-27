//2050
#include <stdio.h>

char str[200];

int main(){
	scanf("%s",str);
	
	for(int i=0; str[i]; i++){
	
		printf("%1d ",str[i]-64);	
	}
	
}