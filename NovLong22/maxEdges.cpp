#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, l;
        cin >> n >> k >> l;
        n = n - (k + l);
        if (n < 0)
        {
            n = abs(n);
            l = l - n;
            k = k - n;
            n = 0;
        }
        ll ans = k * (n + l) + (n * l) + (n * (n - 1)) / 2;
        cout << ans << endl;
    }

    return 0;
}