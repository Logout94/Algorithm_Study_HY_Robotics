// 1936
#include <stdio.h>

int a,b; //가위 1 바위 2 보 3

int main(){
	scanf("%d %d", &a, &b);
	
	if( (a==1 && b==3) || (a==2 && b==1) || (a==3 && b==2) ){
		printf("A");
	}
	else{
		printf("B");
	}
	return 0;
} 