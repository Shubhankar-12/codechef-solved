#include<bits/stdc++.h>
using namespace std;

bool result(int n,int x,int p)
{
    int total= (x*3)-(n-x);
    if(total>=p)
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,p;
        cin>>n>>x>>p;
        if(result(n,x,p))
            cout<<"PASS"<<endl;
        else
            cout<<"FAIL"<<endl;

    }
    
    return 0;
}