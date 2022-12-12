#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, C = 0, N = 0, D = 0;
        cin >> x;
        string s;
        cin >> s;
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == 'C')
                C++;
            else if (s[i] == 'N')
                N++;
            else
                D++;
        }
        if (C > N)
            cout << (60 * x) << endl;
        else if (C == N)
            cout << (55 * x) << endl;
        else
            cout << (40 * x) << endl;
    }

    return 0;
}