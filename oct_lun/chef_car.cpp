#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,v;
        cin>>n>>v;
        ll sum=0;
        int minn=0,maxx=0;
        maxx=((n-1)*n)/2;
        if(v==1)
            minn=maxx;
        else{
            if(v>=n-1)
                minn=n-1;
            else{
                minn+=v+((n-v)+(n-v+1))/2;
            }
        }
        cout<<maxx<<" "<<minn<<endl;
    }
    
    return 0;
}