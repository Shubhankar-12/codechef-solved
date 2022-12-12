#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (k < n * (n - 1))
        {
            cout << "-1" << endl;
            continue;
        }
        ll subGcdSum = (n * (n + 1) / 2) - 1;
        for (int i = 0; i < n - 1; i++)
        {
            cout << "1 ";
        }
        cout << k - subGcdSum << endl;
    }

    return 0;
}