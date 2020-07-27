//2047
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char str[80];

int main(){
	
	scanf("%s",&str);
	
	for(int i=0; i<strlen(str); i++){
	
		   str[i] = (char)toupper( str[i]);
		}
	
	printf("%s\n",str);
	return 0;
	
}