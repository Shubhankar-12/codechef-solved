#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int t;
    // cin >> t;
    set<char> arr;
    for (int i = 0; i < 26; i++)
    {
        arr.insert((char)(97 + i));
    }
    for (auto i : arr)
        cout << i << " ";
    // while (t--)
    // {
    //     int n;
    //     cin >> n;
    //     string s1, s2;
    //     cin >> s1 >> s2;
    //     int val = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (s1[i] != s2[i])
    //         {
    //         }
    //     }
    // }
    // int a = ('b' - 'z') % 26;
    // cout << a;
    return 0;
}