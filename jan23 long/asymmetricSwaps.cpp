#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> rar(2 * n);
        for (ll i = 0; i < n; i++)
            cin >> rar[i];
        for (ll i = n; i < 2 * n; i++)
            cin >> rar[i];
        sort(rar.begin(), rar.end());
        ll ct = rar[2 * n - 1] - rar[0];
        for (ll i = 0; i < n; i++)
        {
            ct = min(ct, (rar[i + n - 1] - rar[i]));
        }
        cout << ct << endl;
    }

    return 0;
}