#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int pt;
        cin >> pt;
        for (int i = 1; i <= pt / 2; i++)
        {
            cout << i << " " << pt - i + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}