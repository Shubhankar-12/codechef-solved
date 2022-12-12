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
        vector<int> checkbro(2 * n);
        bool dekh = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> checkbro[i];
        }
        for (int i = 0; i < 2 * n; i++)
        {
            mp[checkbro[i]]++;
        }
        for (auto i : mp)
        {
            if (i.second >= 3)
            {
                dekh = 1;
                break;
            }
        }
        if (dekh)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}