#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll int helper(int ind, string &str, vector<int> &arr, map<string, string> &mp, string res, set<string> &st, ll int m)
{
    if (ind < 0)
    {
        auto it = st.find(res);
        if (it == st.end())
        {
            st.insert(res);
            return 1;
        }
        return 0;
    }

    if (arr[ind] != -1)
        return arr[ind];

    ll int frst = helper(ind - 1, str, arr, mp, mp[str.substr(ind, 1) + res], st, m);
    ll int sec = 0;
    if (ind - 1 >= 0 && mp.find(str.substr(ind - 1, 2)) != mp.end())
        sec = helper(ind - 2, str, arr, mp, mp[str.substr(ind - 1, 2)] + res, st, m);
    return arr[ind] = (frst + sec) % 998244353;
}

ll int BinSub()
{
    string str;
    cin >> str;
    ll int n = str.length();
    vector<int> arr(n, -1);
    map<string, string> mp{{"a", "01"}, {"b", "10"}, {"ab", "010"}, {"ba", "101"}};
    set<string> st;
    cout << helper(n - 1, str, arr, mp, "", st, 998244353) << endl;
    return 0;
}

int main()
{
    ll int t;
    cin >> t;
    while (t--)
    {
        BinSub();
    }
    return 0;
}