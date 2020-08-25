#include <stdio.h>

int T;
int a,b;
char output[10000];


int main(){
	scanf("%d",&T);
	
	for(int i=1; i<=T; i++){
		scanf("%d %d",&a,&b);
		if(a>b) output[i]='>';
		else if(a==b) output[i]='=';
		else output[i]='<';
		 
	}
	
	for(int i=1; i<=T; i++){
		printf("#%d %c\n",i,output[i]);
	}
}
