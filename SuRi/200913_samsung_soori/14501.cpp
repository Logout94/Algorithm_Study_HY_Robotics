//14501
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

#define MAX 16
#define INTMAX 987654321
int N;
 vector <pair<int,int>> v[MAX];
int max_cal;

int MaxProfit(int day)
{
    if(day == N)
    {
        return 0;
    }
    else if( day > N)
    {
        return -INTMAX;
    }

    int time = v[day].front().first;
    int cost = v[day].front().second;

     max_cal = max(cost+MaxProfit(day+time),MaxProfit(day+1));

    return max_cal;
}


int main()
{

    cin>>N;

    for(int i=0; i<N; i++ )
    {
        int t, p;
        cin>>t>>p;
        v[i].push_back(make_pair(t,p));
    }

    int ans = MaxProfit(0);
    
    cout<<ans<<endl;

    return 0;
}