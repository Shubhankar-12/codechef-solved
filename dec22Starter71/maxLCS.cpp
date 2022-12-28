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
        string zq;
        cin >> zq;
        string zt = zq;
        reverse(zq.begin(), zq.end());
        vector<vector<int>> zD(n + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (zq[j - 1] != zt[i - 1])
                    zD[i][j] = max(zD[i][j - 1], zD[i - 1][j]);
                else
                    zD[i][j] = zD[i - 1][j - 1] + 1;
            }
        }
        int san = zD[n][n] / 2;
        cout << san << endl;
    }

    return 0;
}