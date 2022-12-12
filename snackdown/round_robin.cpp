#include<bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define sc ;
#define ss second
#define pb push_back
#define pp pop_back
#define ll long long

int main()
{
    tc{
        int n,k;
        cin>>n>>k;
        if(k==1 || k==2)
            cout<<2*(n-k)<<endl;
        else
            cout<<2*(n-k+(k-1)/2)<<endl;
    }
    return 0;
}