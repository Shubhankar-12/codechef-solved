#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, counter = 0;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int less=0,more=0;
        for (int i = 0; i < n; i++)
        {
            less=0,more=0;
            for(int j=0;j<n;j++){
                if(arr[j]<=arr[i])
                    less++;
                
                if(arr[j]>arr[i])
                    more++;
            }
            if(less>more)
                counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}