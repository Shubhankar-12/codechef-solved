#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll xt, yz;
        cin >> xt >> yz;
        ll pt, adrs;
        if (xt % 2 == 0)
            pt = 2;
        else if (xt % 3 == 0)
            pt = 3;
        else
            pt = xt;
        xt = xt + pt;
        ll drf = yz - xt;
        adrs = drf / 2;
        if (drf % 2 != 0)
            adrs += 1;

        cout << adrs + 1 << endl;
    }

    return 0;
}