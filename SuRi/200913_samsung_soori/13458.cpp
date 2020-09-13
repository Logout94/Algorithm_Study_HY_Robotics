// 13458
//  시험감독

#include <iostream>

using namespace std;

#define TestMax 1000000
#define Max 1000000


int main()
{
    int N;
    int B,C;
    int Class[TestMax];
    long long int ans=0;

    cin>> N;
    for(int i=0; i<N; i++)
    {
        cin>>Class[i]; // 각 시험장 응시자 수 
    }

    cin>>B>>C; // 총감독관, 부감독관

    for(int i=0; i<N; i++)
    {
        ans++; // 총감독관 수
        Class[i]-=B;

        if(Class[i]>0)
        {
            ans += (Class[i]%C==0)?Class[i]/C:Class[i]/C+1;
        }
        
    }
      
    cout<<ans<<endl;


return 0;
    
}