//2884
#include <stdio.h>


int h, m;
int c;

int main(){
	scanf("%d %d", &h,&m);
	
	int c=0;
	
	if(m<45){
		m= m+15; //m-45+60
		c=1;
		
	}
	else{
		m= m-45;
		c=0;
	}
	
	if(c==1 && h==0){
		h=23;
	}
	else if(c ==1 && h !=0){
		h = h-1;
	}
	else if(c == 0 ){
		h= h;
	}
	
	printf("%d %d\n",h,m);
	
}
