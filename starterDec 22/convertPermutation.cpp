#include <bits/stdc++.h>
using namespace std;

int perm(vector<int> arr, int n)
{
}

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
        bool dekh = 0;
        sort(arr.begin(), arr.end());
        int ttl = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > i + 1)
            {
                dekh = 1;
                break;
            }
            ttl += arr[i];
        }
        int overall = n * (n + 1) / 2;
        if (dekh)
        {
            cout << -1 << endl;
        }
        else
            cout << overall - ttl << endl;
    }

    return 0;
}