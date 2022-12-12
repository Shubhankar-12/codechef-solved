#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,x;
        cin>>n>>l>>x;
        if(l==0 || n-l==0)
            cout<<0<<endl;
        else if(l>(n-l))
            cout<<(n-l)*x<<endl;
        else{
            cout<<l*x<<endl;
        }
    }
    return 0;
}