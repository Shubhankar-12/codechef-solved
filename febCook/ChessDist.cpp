#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int dis1 = abs(x1 - x2);
        int dis2 = abs(y1 - y2);

        int dist = max(dis1, dis2);
        cout << dist << endl;
    }

    return 0;
}