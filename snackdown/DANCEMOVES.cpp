#include<bits/stdc++.h>
using namespace std;

int moves(int x,int y,int move)
{
    
    if(x==y)
        return move;
    else if(x<y)
    {
        x=x+2;
        move++;
        moves(x,y,move);
    }
    else
    {
        x=x-1;
        move++;
        moves(x,y,move);
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        int move=0;
        cin>>x>>y;
        cout<<moves(x,y,move)<<endl;
    }
    
    return 0;
}