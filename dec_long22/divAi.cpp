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
        vector<ll> AiDiv(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> AiDiv[i];
        }
        ll AiHcf = AiDiv[0];
        for (ll i = 0; i < n; i++)
        {
            AiHcf = __gcd(AiHcf, AiDiv[i]);
        }
        for (auto i : AiDiv)
            cout << i / AiHcf << " ";
        cout << endl;
    }

    return 0;
}