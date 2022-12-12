#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        if (a % b == 0)
        {
            cout << "-1" << endl;
            continue;
        }

        ll ans = n;
        if (ans % a)
        {
            ans = n + a - (ans % a);
        }
        while (!(!(ans % a) && (ans % b)))
        {
            ans = ans + a;
        }
        cout << ans << endl;
    }
    return 0;
}