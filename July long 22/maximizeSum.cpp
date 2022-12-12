#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int val1, val2;
        if (m < 2 * n)
        {
            cout << m << " " << m << endl;
        }
        else if (m >= 2 * n && !m % n)
        {
            cout << m << " " << n << endl;
        }
        else
        {
            int res = m / 2;
            if (m >= 2 * n)
                res = 2 * n;
            int ans = INT_MIN;
            for (int i = n; i <= res; i++)
            {
                int curr = m / i;
                int dup = (i * curr) - i;
                if (dup > ans)
                {
                    val1 = i;
                    val2 = i * curr;
                    ans = dup;
                }
            }
            cout << val1 << " " << val2 << endl;
        }
    }
    return 0;
}