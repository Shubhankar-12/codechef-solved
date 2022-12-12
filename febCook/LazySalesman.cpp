#include <bits/stdc++.h>
using namespace std;

int main()
{
    short int t;
    cin >> t;
    while (t--)
    {
        short int n;
        int w;
        cin >> n >> w;
        short int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int count = 0, sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (sum >= w)
                break;
            sum += arr[i];
            count++;
        }
        cout << (n - count) << endl;
    }

    return 0;
}