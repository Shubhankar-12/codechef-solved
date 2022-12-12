#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> div(n);
        for (int i = 0; i < n; i++)
        {
            cin >> div[i];
        }
        bool dekh = true;
        for (auto i : div)
        {
            if (i % k == 0)
            {
                dekh = 0;
                break;
            }
        }
        if (!dekh)
        {
            cout << "YES" << endl;
            continue;
        }
        ll left = 1;
        for (auto i : div)
        {
            left = (left * i) % k;
        }
        left == 0 ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}