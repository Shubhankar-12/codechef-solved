#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, qu;
        cin >> n >> qu;
        int binodd[64][n];
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            for (int j = 0; j < 64; j++)
            {
                binodd[j][i] = (int)(x % 2);
                x /= 2;
            }
        }
        for (int i = 0; i < 64; i++)
        {
            ll res = 0;
            for (int j = 0; j < n; j++)
            {
                res += binodd[i][j];
                binodd[i][j] = res;
            }
        }
        while (qu--)
        {
            int l1, l2, r1, r2, k;
            cin >> k >> l1 >> r1 >> l2 >> r2;
            int t1 = r1 - l1 + 1;
            int t2 = r2 - l2 + 1;
            int tff, tss;
            if (l1 == 0)

                tff = binodd[k][r1];

            else

                tff = binodd[k][r1] - binodd[k][l1 - 1];

            if (l2 == 0)

                tss = binodd[k][r2];

            else
                tss = binodd[k][r2] - binodd[k][l2 - 1];
            ll sum = (ll)(t1 - tff) * (ll)(tss) + (ll)(tff) * (ll)(t2 - tss);
            cout << sum << endl;
        }
    }

    return 0;
}