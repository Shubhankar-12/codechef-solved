#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = pow(10, 9) + 7;

int main()
{
    vector<ll> dp(1000001);
    dp[0] = 0;
    dp[1] = 1;
    for (ll i = 2; i <= 1000000; i++)
    {
        dp[i] = i * dp[i - 1];
        dp[i] %= mod;
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll res = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            res = (dp[arr[i]] + res) % mod;
        }

        cout << res << endl;
    }

    return 0;
}