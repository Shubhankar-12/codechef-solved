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
        if (n == 2)
            cout << 3 << endl;
        else
        {
            int win = 3 * (n - 1);
            int loss = 3 * round((n - 1) / 2);
            cout << win - loss << endl;
        }
    }

    return 0;
}