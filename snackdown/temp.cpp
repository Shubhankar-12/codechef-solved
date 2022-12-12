#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    long long  n,k;
    cin>>n>>k;
    if(k==0)
    {
      cout<<"YES"<<endl;
      cout<<0<<endl;
      return;
    }
    long int yy=0;
    long long  z3=k;
    while((z3>>1)>0)
    {
      yy++;
      z3=z3>>1;
    }
    int start=1,finish=k;
    vector<int>res;
    while(yy>=0)
    { 
      int segment_length=(1ll<<yy);
      yy--;
      if(finish-start+1>=segment_length)
      {  
         res.push_back(start);
         start+=segment_length;
      }
      else
      { 
        int start1=start;
        start-=(segment_length-(finish-start+1));
        res.push_back(start);
        finish-=((finish-start1+1));
      }
       if(start>finish&&yy>=0)
       {
         cout<<"NO"<<endl;
         return;
       }
    }
     reverse(res.begin(),res.end());
    if(start>finish)
    {
      cout<<"YES"<<endl;
      cout<<res.size()<<endl;
      for(int c:res)
        cout<<c<<endl;
    }
    else
      cout<<"NO"<<endl;
}  
int main()
{    
    long long int t;
    cin>>t;
    while(t--)
     {   
         solve();
     }
    return 0;
}