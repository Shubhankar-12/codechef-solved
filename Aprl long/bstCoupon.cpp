#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int off = x / 10;
        if (off > 100)
            cout << off << endl;
        else
            cout << 100 << endl;
    }

    return 0;
}