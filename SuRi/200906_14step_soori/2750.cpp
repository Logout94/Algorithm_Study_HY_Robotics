//2750
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int store[1000]={};
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>store[i];
	}
	sort(store,store+n);
	
	for(int i=0; i<n; i++){
		cout<<store[i]<<endl;
	}
	return 0;
}