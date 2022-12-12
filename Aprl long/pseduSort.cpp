#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int n)
{
    if (n == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    else
        isSorted(arr + 1, n - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (isSorted(arr, n))
            cout << "YES" << endl;
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    break;
                }
            }
            if (isSorted(arr, n))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}