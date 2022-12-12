#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> naha(n);
        for (int i = 0; i < n; i++)
        {
            cin >> naha[i];
        }
        if (n == 1 && naha[0] == k)
        {
            cout << "Yes" << endl;
            continue;
        }
        bool fl = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (k == naha[i])
            {
                fl = 1;
                break;
            }
        }
        if (fl)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}