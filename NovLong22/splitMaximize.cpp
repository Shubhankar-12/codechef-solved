#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 998244353;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll val = 0;
        ll res;
        for (ll i = 0; i < n; i++)
        {
            cin >> res;
            val += res;
            val %= mod;
        }
        ll ans = (val * (val - 1)) % mod;
        // val = val % mod;
        cout << ans << endl;
    }

    return 0;
}