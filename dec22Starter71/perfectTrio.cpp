#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        arr[2] == arr[0] + arr[1] ? cout << "YES" : cout << "NO";
        cout << endl;
    }

    return 0;
}