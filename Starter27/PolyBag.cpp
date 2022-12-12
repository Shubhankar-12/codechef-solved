#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        float x = (float)n / (float)10;
        if (x - (int)x > 0)
            cout << (int)x + 1 << endl;
        else
            cout << (int)x << endl;
    }

    return 0;
}