#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> cata(n), rupia(n);
        set<int> unq;
        for (int i = 0; i < n; i++)
        {
            cin >> cata[i];
            unq.insert(cata[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> rupia[i];
        }
        if (k > unq.size())
        {
            cout << -1 << endl;
            continue;
        }
        map<int, int> deko;
        ll ttl = 0;

        for (int i = 0; i < n; i++)
        {
            if (deko.find(cata[i]) == deko.end())
            {
                deko[cata[i]] = rupia[i];
                continue;
            }
            deko[cata[i]] = min(deko[cata[i]], rupia[i]);
        }
        vector<int> kitne;
        for (auto &s : deko)
            kitne.push_back(s.second);
        sort(kitne.begin(), kitne.end());
        ttl = accumulate(kitne.begin(), kitne.begin() + k, 0);

        cout << ttl << endl;
    }
    return 0;
}