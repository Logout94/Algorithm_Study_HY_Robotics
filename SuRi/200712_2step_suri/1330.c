#include <stdio.h>

int a,b;

int main(){
	scanf("%d %d", &a , &b);
	
	if(a>b) printf(">\n");
	else if(a<b) printf("<\n");
	else printf("==\n");
	
	return 0;
	
}