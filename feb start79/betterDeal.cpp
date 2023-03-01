#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float p1, p2;
        cin >> p1 >> p2;
        p1 = 100 - p1;
        p2 = 100 - p2;

        float r1 = (p1 / 100) * 100;
        float r2 = (p2 / 100) * 200;
        if (r1 > r2)
            cout << "SECOND" << endl;
        else if (r1 < r2)
            cout << "FIRST" << endl;
        else
            cout << "BOTH" << endl;
    }

    return 0;
}