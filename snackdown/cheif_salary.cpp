#include<bits/stdc++.h>
using namespace std;

int salary(int x,int y,string day)
{
    int total,sum=0;
    int maxx=INT_MIN;
    int streak=0;
    for (int i = 0; i < 30; i++)
    {
        if(day[i]=='1')
        {
            sum++;
            streak++;
        }
        else{
            maxx=max(maxx,streak);
            streak=0;
        }
        
    }
    maxx=max(maxx,streak);
    total=(sum*x)+(maxx*y);
    return total;
    
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        string day;
        cin>>day;
        cout<<salary(x,y,day)<<endl;
    }
    
    return 0;
}