//2588
#include <stdio.h>

int first, second;
int a,b,c;


int main(){
	  scanf("%d", &first);
	  scanf("%d", &second);
	
	int q,w,e;
	
	q= second/100; // 백의자리
	w= (second - q*100)/10;
	e = second%10;
	
	a = first * e;
	b = first * w;
	c = first * q;
	
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",a+10*b+100*c); 
	  
}
