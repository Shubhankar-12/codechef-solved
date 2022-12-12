#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        ll a = INT_MAX;
        cin >> n;
        ll arr[n];
        if(n==1)
            cout << "0" << endl;
        
        else
        {
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
                a = min(a, arr[i]);
                sum += arr[i];
            }
            if (sum % 2 == 0)
                cout << "0" << endl;
            else
                cout << a << endl;
        }
    }

    return 0;
}