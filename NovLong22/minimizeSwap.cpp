#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ones = 0, zeros = 0;
        for (auto i : s)
        {
            if (i == '1')
                ones++;
            else
                zeros++;
        }
        if (ones % 2)
        {
            if (zeros != ones - 1)
                cout << -1 << endl;
            else
            {
                        }
        }
        else
        {
            if (ones == 0)
                cout << 0 << endl;
            else
            {
            }
        }
    }

    return 0;
}