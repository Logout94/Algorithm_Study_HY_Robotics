//2753
#include <stdio.h>


int year;

int main(){
	scanf("%d", &year);
	
	if(year%4 == 0 && year % 100 !=0 && year % 400 != 0){
		printf("1\n");
	}
	else if(year%4==0 && year%400==0){
		printf("1\n");
	}
	else if(year%4 ==0 && year%100 !=0){
		printf("1\n");
	}
	else{
		printf("0\n");
	}
	
	return 0;
}