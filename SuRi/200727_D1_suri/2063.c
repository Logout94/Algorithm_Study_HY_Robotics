//2063
#include <stdio.h>
#include <algorithm>

using namespace std;

int n;
int arr[200];
int mid;

int main(){
	scanf("%d",&n);
	mid = n/2 ;
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	sort(arr, arr+n);
	
	printf("%d",arr[mid]);
}