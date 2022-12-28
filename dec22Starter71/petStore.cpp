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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n % 2)
        {
            cout << "NO" << endl;
            continue;
        }
        unordered_map<int, int> dek;
        for (int i = 0; i < n; i++)
        {
            dek[arr[i]]++;
        }
        bool yep = 0;
        for (auto it : dek)
        {
            if (it.second % 2)
            {
                yep = 1;
                break;
            }
        }
        yep ? cout << "NO" : cout << "YES";
        cout << endl;
    }

    return 0;
}