#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<n<<endl;
            continue;
        }
        ll sum=1;
        n-=2;
        sum+=n*(n+1);
        cout<<sum<<endl;
    }
    
    return 0;
}