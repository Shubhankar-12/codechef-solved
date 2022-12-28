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
        vector<int> men(n), women(n);
        for (int i = 0; i < n; i++)
        {
            cin >> men[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> women[i];
        }
        int lsted = 0;
        int tL = 0;
        for (int i = 0; i < n; i++)
        {
            if (men[i] != 0 && women[i] != 0)
                tL++;
            else
            {
                lsted = max(tL, lsted);
                tL = 0;
            }
        }
        lsted = max(tL, lsted);
        cout << lsted << endl;
    }

    return 0;
}