#include <bits/stdc++.h>
using namespace std;

int steps(int dist, int k)
{
    int step = 0;
    while (dist)
    {
        if (dist <= k)
            return step + 1;
        dist -= k;
        step++;
    }
    return step;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int dist = abs(y - x);
        cout << steps(dist, k) << endl;
    }

    return 0;
}