#include <bits/stdc++.h>
using namespace std;

int officeHours(int x, int y)
{
    return (4 * x + y);
}

int insurance(int x, int y)
{
    if (y > x)
        return x;
    else
        return y;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        // cout << insurance(x, y) << endl;
        cout << officeHours(x, y) << endl;
    }

    return 0;
}