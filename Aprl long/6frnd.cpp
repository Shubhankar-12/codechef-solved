#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        int two = 3 * x;
        int three = 2 * y;
        if (two > three)
            cout << three << endl;
        else
            cout << two << endl;
    }

    return 0;
}