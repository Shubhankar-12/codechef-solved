#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll qw;
        cin >> qw;
        vector<ll> sh(qw);
        map<ll, ll> pma1;
        map<ll, ll> pm;
        for (ll i = 0; i < qw; i++)
        {
            cin >> sh[i];
            pma1[sh[i]]++;
        }
        vector<ll> hs(qw + 1, 0);
        for (ll i = qw - 1; i >= 0; i--)
        {
            hs[i] = hs[i + 1];
            hs[i] = hs[i] + pma1[sh[i] + 1];
            hs[i] = hs[i] - pm[sh[i] - 1];
            pma1[sh[i]]--;
            pm[sh[i]]++;
        }
        ll dk = INT_MIN;
        for (ll i = 0; i < qw; i++)
        {
            dk = max(dk, hs[i]);
        }
        cout << dk << endl;
    }

    return 0;
}