//2739
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    
    for(int i=0; i<9; i++)
        cout<<a<<" * "<<i+1<<" = "<<a*(i+1)<<endl;
}