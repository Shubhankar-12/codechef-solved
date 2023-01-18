#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n1, ct = 0;
        cin >> n1;
        vector<ll> an(n1 * 2);
        for (ll i = 0; i < 2 * n1; i++)
        {
            cin >> an[i];
        }
        for (ll i = 0; i < (2 * n1) - 1; i++)
        {
            ct = 0;
            for (ll j = 0; j < 2 * n1; j++)
            {
                if (an[i] == an[j])
                    ct++;
            }
            if (ct == 3)
            {
                cout << "YES" << endl;
                break;
            }
        }
        if (ct < 3)
            cout << "NO" << endl;
    }
    return 0;
}