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
        string s;
        cin >> s;
        map<char, int> mp;
        bool flag = 0;
        if (s.length() % 2)
            cout << "NO" << endl;
        else
        {
            for (auto i : s)
                mp[i]++;
            for (auto i : mp)
            {
                if (i.second % 2)
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                cout << "YES" << endl;
        }
    }

    return 0;
}