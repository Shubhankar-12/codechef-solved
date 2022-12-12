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
        int ans = 0, res = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (!arr[i])
                res = 0;
            else
                res++;
            ans = ans + res;
        }
        cout << ans << endl;
    }

    return 0;
}