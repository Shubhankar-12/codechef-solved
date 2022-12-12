#include<bits/stdc++.h>
using namespace std;
int counter=0;
int check(int k,int i)
{
    
    if(k==0 || k==1)
    {
        return k;
    }
    else
    {
        k-=pow(2,i);
        i++;
        ++counter;
        check(k,i);
    }
}
void print(int k,int i)
{
    if(k==0 || k==1)
        return;
    else
    {
        k-=pow(2,i);
        i++;
        cout<<k+1<<endl;
        print(k,i);
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,a=0;
        cin>>n>>k;
        if(k==0)
        {
            cout<<"YES\n"<<0<<endl;

        }
        else if(check(k,0)==0)
        {
            cout<<"YES\n"<<counter<<endl;
            counter=0;
            print(k,0);
        }
        else
            cout<<"NO\n";
    }
    
    return 0;
}