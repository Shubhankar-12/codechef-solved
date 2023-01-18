#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> hil(n);
        ll lwq = INT_MIN;
        ll hgq = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> hil[i];
            if (hil[i] >= 0 && hil[i] <= hgq)
                hgq = hil[i];
            if (hil[i] < 0 && hil[i] > lwq)
                lwq = hil[i];
        }
        ll dsq = min(hgq, abs(lwq));
        cout << dsq - 1 << endl;
    }

    return 0;
}