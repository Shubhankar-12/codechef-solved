#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n, r;
        cin >> x >> y >> n >> r;
        if (x / y >= n)
        {
            cout << 0 << " " << n << endl;
        }
        else if (r / x < n)
            cout << -1 << endl;
        else
        {
            // b2=(r-nx)/(y-x);
            int b2 = (r - (n * x)) / (y - x);
            if (b2 > n)
                b2 = n;
            int b1 = n - b2;
            cout << b1 << " " << b2 << endl;
        }
    }

    return 0;
}