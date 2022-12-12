#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        y = y / 2;
        int n = (x - y);
        cout << n << endl;
    }

    return 0;
}