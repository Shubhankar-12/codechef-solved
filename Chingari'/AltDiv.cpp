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
        bool flag[2 * n] = {0};
        arr[0] = 1;
        flag[0] = 1, flag[1] = 1;
        int j;
        for (int i = 1; i < n; i++)
        {

            if (i % 2 != 0)
            {
                j = 2;
                while ((j < 2 * n))
                {
                    if (j % arr[i - 1] == 0 && !flag[j])
                    {
                        arr[i] = j;
                        flag[j] = 1;
                        break;
                    }
                    j++;
                }
            }
            else
            {
                j = 2;
                while ((j < 2 * n))
                {
                    if (j % arr[i - 1] != 0 && !flag[j])
                    {
                        arr[i] = j;
                        flag[j] = 1;
                        break;
                    }
                    j++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}