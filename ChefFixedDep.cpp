#include <bits/stdc++.h>
using namespace std;

int FDno(short int arr[], short int n, int x)
{
    int i = 0, j = n - 1;
    int sum = 0, minisum = INT_MAX;
    while (i < j)
    {
        if (arr[i] >= x || arr[j] >= x)
            return 1;
    }
}

int main()
{
    short int t;
    cin >> t;
    while (t--)
    {
        short int n;
        int x, sum = 0;
        cin >> n >> x;
        short int FD[n];
        for (int i = 0; i < n; i++)
        {
            cin >> FD[i];
            sum += FD[i];
        }
        if (sum < x)
            cout << -1 << endl;
        else
        {
            cout << FDno(FD, n, x) << endl;
        }
    }

    return 0;
}