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
        int arr[n];
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int res = 0;
        int temp[n + 1] = {0};
        for (auto i : mp)
        {
            res = max(res, i.second);
            temp[i.first] = i.second;
        }
        int val = 0;
        for (int i = 0; i < n; i++)
        {
            if ((i ^ (i + 1)) <= 1)
                val = max(val, temp[i] + temp[i + 1]);
        }
        res = max(res, val);
        cout << n - res << endl;
    }
    return 0;
}
