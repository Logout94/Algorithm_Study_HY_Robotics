#include stdio.h
int a,b,c;

int main(){
    scanf(%d %d %d,&a,&b,&c);
    
    printf(%dn,(a+b)%c);
    printf(%dn,(a%c + b%c)%c);
    printf(%dn,(ab)%c);
    printf(%dn,(a%c  b%c)%c);
}