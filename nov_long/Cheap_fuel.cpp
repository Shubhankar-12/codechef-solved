#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,a,b,k;
        cin>>x>>y>>a>>b>>k;
        x = x+(k-1)*a;
        y = y+(k-1)*b;
        if(x==y)
            cout<<"SAME PRICE"<<endl;
        else if(x<y)
            cout<<"PETROL"<<endl;
        else
            cout<<"DIESEL"<<endl;
    }
    
    return 0;
}