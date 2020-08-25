//2029
#include <stdio.h>

int a,b;
int T;


int main(){
	scanf("%d",&T);
	
	for(int i=0; i<T; i++){
		scanf("%d %d",&a,&b);
		printf("#%d %d %d\n",i+1,a/b,a%b);
	}

	
}