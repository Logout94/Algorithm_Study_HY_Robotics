#include <iostream>
#include <string>

using namespace std;

int main(){
	string date;
	int t;
	int ans;
	string month[13] ={"00","01","02","03","04","05","06","07","08","09","10","11","12"};
	string day[13]={"-1","31","28","31","30","31","30","31","31","30","31","30","31"};
	cin>>t;
	
	for(int x=1; x<=t; x++){
		cin>>date;
		
		for(int i=0; i<13; i++){
			if(date.compare(4,2,month[i]) == 0 ){
				if(date.compare(6,2,day[i]) <= 0){
					cout<<"#"<<x<<' '<<date.substr(0,4)<<"/"<<date.substr(4,2)<<"/"<<date.substr(6,2)<<endl;
				}
				else{
					cout<<"#"<<x<<' '<<"-1"<<endl;
				}
			}
			
		
		}
	}
	
	
}