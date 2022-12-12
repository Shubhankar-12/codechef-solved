#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,p,q;
        cin>>a>>b>>p>>q;
        if(p%a==0 && q%b==0)
        {
            int a1,b1;
            a1=p/a;
            b1=q/b;
            if(a1==b1 || a1==b1+1 || b1==a1+1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
                cout<<"NO"<<endl;
    }
    return 0;
}