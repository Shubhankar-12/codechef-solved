#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    float y;

    cin>>x>>y;
    if(x<y && x%5==0 && x>0)
        y=y-x-0.5;
    else
        y+=0;

    cout<<fixed<<setprecision(2)<<y<<endl;
    return 0;
}