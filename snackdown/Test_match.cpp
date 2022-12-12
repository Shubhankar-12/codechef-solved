#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int ind=0,eng=0;
        int ar[5];
        for (int i = 0; i < 5; i++)
        {
            cin>>ar[i];
        }
        
        for (int i = 0; i < 5; i++)
        {
            if(ar[i]==1)
                ind++;
            else if(ar[i]==2)
                eng++;
            else{
                ind+0;
                eng+0;
            }
        }
        
    if(ind > eng)
        cout<<"INDIA"<<endl;
    else if(ind < eng)
        cout<<"ENGLAND"<<endl;
    else if(ind == eng)
        cout<<"DRAW"<<endl;
    }
    return 0;
}