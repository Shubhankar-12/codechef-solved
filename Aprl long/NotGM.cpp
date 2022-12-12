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
        int minus = 0, plus = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                plus++;
            else
                minus++;
        }
        if (abs(plus - minus) < 2)

            cout << "YES" << endl;
        else if (abs(plus - minus) == 2 && plus % 2 == 0 && minus % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}