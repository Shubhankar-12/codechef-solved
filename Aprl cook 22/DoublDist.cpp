#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool flag = 1;
        sort(arr, arr + n);
        for (int i = 1; i < n - 1; i++)
        {
            int d1 = arr[i] - arr[i - 1];
            int d2 = arr[i + 1] - arr[i];
            if (2 * d1 != d2 && d1 != 2 * d2)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}