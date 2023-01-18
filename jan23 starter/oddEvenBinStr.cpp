#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nho, sr = 0;
        cin >> nho;
        for (int i = 0; i < nho; i++)
        {
            int hge;
            cin >> hge;
            if (hge == 0)
                sr++;
        }
        if (sr % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}