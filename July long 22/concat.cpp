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
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans.push_back(arr[i]);
        }
        vector<int> ans1;
        vector<int> ans2;
        sort(ans.begin(), ans.end());
        int j = 0;

        for (int i = 0; i < n; i++)
        {
            if (ans[j] == arr[i])
            {
                ans1.push_back(arr[i]);
                j++;
            }
            else
                ans2.push_back(arr[i]);
        }
        for (int i = 0; i < ans2.size(); i++)
        {
            ans1.push_back(ans2[i]);
        }
        int check = 0;
        for (int i = 1; i < n; i++)
        {
            if (ans1[i - 1] > ans1[i])
                check++;
        }
        if (check == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}