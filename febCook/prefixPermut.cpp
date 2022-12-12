#include <bits/stdc++.h>
using namespace std;

void prefix(int n, int k, int arr[])
{
    vector<int> arr1;
    sort(arr, arr + k);
    int p = 0;
    for (int i = 0; i < k; i++)
    {
        for (int z = arr[i]; z > p; z--)
        {
            arr1.push_back(z);
        }
        p = arr[i];
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[k];

        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        prefix(n, k, arr);
    }

    return 0;
}